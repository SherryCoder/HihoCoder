#include<iostream>
#include<stdio.h>
using namespace std;

const int MAX = 1e5+2;
int P[MAX];
//对线段树中某一段区间进行统一的更新，更新函数没有必要更新到叶子节点，利用懒惰标记优化

typedef struct node{
	int l,r;
	int sum;
	int lazytag;
};

//node tree[2*MAX];
node tree[MAX<<2];

void build(int l,int r,int pos){
	tree[pos].l = l;
	tree[pos].r = r;
	tree[pos].lazytag = 0;
	if(l == r){
		tree[pos].sum = P[tree[pos].l];
	}else{
		int mid = (l+r)/2;
		build(l,mid,pos*2);
		build(mid+1,r,pos*2+1);
		tree[pos].sum = tree[2*pos].sum + tree[2*pos+1].sum;
	}
	return;
}

void pushdown(int pos){
	if(tree[pos].lazytag){
		int mid = (tree[pos].l+tree[pos].r)/2;
		tree[2*pos].sum = tree[pos].lazytag*(mid-tree[pos].l+1);
		tree[2*pos+1].sum = tree[pos].lazytag*(tree[pos].r-mid);
		tree[2*pos].lazytag = tree[2*pos+1].lazytag = tree[pos].lazytag;
		tree[pos].lazytag = 0;
	}	
}

int query(int l,int r,int pos){
	if(tree[pos].l == l && tree[pos].r == r){
		return tree[pos].sum;
	}
	pushdown(pos);
	int mid = (tree[pos].l+tree[pos].r)/2;
	if(r <= mid){
		return query(l,r,pos*2);
	}else if(l > mid){
		return query(l,r,pos*2+1);
	}else{
		int sum1 = query(l,mid,pos*2);
		int sumr = query(mid+1,r,pos*2+1);
		return sum1+sumr;
	}
}

void update(int l,int r,int newp,int pos){
	if(tree[pos].l == l&& tree[pos].r == r){
		tree[pos].sum = newp*(r-l+1);
		tree[pos].lazytag = newp;
	}else{
		pushdown(pos);
		int mid = (tree[pos].l+tree[pos].r)/2;
		if(r<=mid){
			update(l,r,newp,pos*2);
		}else if(l > mid){
			update(l,r,newp,pos*2+1);
		}else{
			update(l,mid,newp,pos*2);
			update(mid+1,r,newp,pos*2+1);
		}
		tree[pos].sum = tree[2*pos].sum + tree[2*pos+1].sum;
	}
	return;
}
int main(){
	//if(freopen("in.txt","r",stdin)==NULL){
	//	printf("error!\n");
	//}
	//freopen("F:\sgy_vs\HihoCoder\out.txt","w",stdout);

	int N;
	scanf("%d",&N);
	for(int i = 1;i <= N;i++){
		scanf("%d",&P[i]);
	}
	build(1,N,1);
	int Q;
	scanf("%d",&Q);
	while(Q--){
		int type,l,r;
		scanf("%d%d%d",&type,&l,&r);
		if(type == 0){
			printf("%d\n",query(l,r,1));
		}else if(type == 1){
			int newP;
			scanf("%d",&newP);
			update(l,r,newP,1); 
		}
	}
//	fclose(stdin);
	return 0;
	//fclose(stdout);
}