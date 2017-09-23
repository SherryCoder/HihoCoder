//#include<iostream>
//#include<vector>
//using namespace std;
//int N;
//const int MAX = 1e6+2;
//int weight[MAX];   //事先申请好这个数组，和用vector，vector会超时
//
//typedef struct node{
//	int l;		//区间的左边界
//	int r;		//区间的右边界
//	int minV;	//区间的最小值
//};
//node tree[2*MAX];    //对于一个节点i，他的左节点存在2*i，右节点存在2*i+1
//					 //为什么这边的数组大小是2*MAX,一个n的区间长度的线段树的节点个数是2*n-1，因此数组大小只需要2*MAX就够了
					 //对于包含n个叶子节点的完全二叉树，他一定有n-1个非叶子节点，总共就是2n-1个节点
//
//void build(int l,int r,int pos){
//	tree[pos].l = l;
//	tree[pos].r = r;
//	if(l==r){
//		tree[pos].minV = weight[l];
//	}else{
//		build(l,(l+r)/2,pos*2);      //pos*2是pos的左孩子  //这边不是很理解
//		build((l+r)/2+1,r,pos*2+1);  //pos*2+1是pos的右孩子
//		tree[pos].minV = min(tree[pos*2].minV,tree[pos*2+1].minV);
//	}
//}
//
//int query(int l,int r,int pos){    //从节点pos开始查找区间[l,r]的最小值
//	if(tree[pos].l == l&& tree[pos].r == r){
//		return tree[pos].minV;	
//	}
//	int mid = (tree[pos].l + tree[pos].r)/2;
//	if(r<=mid){
//		return query(l,r,pos*2);
//	}else if(l>mid){
//		return query(l,r,pos*2+1);
//	}else{
//		int min_l = query(l,mid,pos*2);
//		int min_r = query(mid+1,r,pos*2+1);
//		int get_min = min(min_l,min_r);
//		return get_min;
//	}
//}
//
//void update(int pi,int vi,int pos){
//	//weight[pi] = vi;
//	if(tree[pos].l == pi && tree[pos].l == tree[pos].r){
//		tree[pos].minV = vi;
//	}else{
//		int mid = (tree[pos].l+tree[pos].r)/2;
//		if(pi <= mid){
//			update(pi,vi,pos*2);
//		}
//		else if(pi > mid){
//			update(pi,vi,pos*2+1);
//		}
//		tree[pos].minV = min(tree[2*pos].minV,tree[2*pos+1].minV);
//	}
//}
//
//int main(){
//	scanf("%d",&N);
////	weight.push_back(-1);
//	for(int i = 1;i <= N;i++){
//		//int w;
//		scanf("%d",&weight[i]);
//		//weight.push_back(w);
//	}
//	build(1,N,1);
//	int Q;
//	scanf("%d",&Q);
//	while(Q){
//		int type;
//		scanf("%d",&type);
//		//表示一个询问
//		if(type == 0){
//			int L,R;
//			scanf("%d%d",&L,&R);
//			printf("%d\n",query(L,R,1));
//		}else{
//			int P,W;
//			scanf("%d%d",&P,&W);
//			update(P,W,1);
//		}
//		Q--;
//	}
//	return 0;
//}