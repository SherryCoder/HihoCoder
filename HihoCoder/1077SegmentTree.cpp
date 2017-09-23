//#include<iostream>
//#include<vector>
//using namespace std;
//int N;
//const int MAX = 1e6+2;
//int weight[MAX];   //���������������飬����vector��vector�ᳬʱ
//
//typedef struct node{
//	int l;		//�������߽�
//	int r;		//������ұ߽�
//	int minV;	//�������Сֵ
//};
//node tree[2*MAX];    //����һ���ڵ�i��������ڵ����2*i���ҽڵ����2*i+1
//					 //Ϊʲô��ߵ������С��2*MAX,һ��n�����䳤�ȵ��߶����Ľڵ������2*n-1����������Сֻ��Ҫ2*MAX�͹���
					 //���ڰ���n��Ҷ�ӽڵ����ȫ����������һ����n-1����Ҷ�ӽڵ㣬�ܹ�����2n-1���ڵ�
//
//void build(int l,int r,int pos){
//	tree[pos].l = l;
//	tree[pos].r = r;
//	if(l==r){
//		tree[pos].minV = weight[l];
//	}else{
//		build(l,(l+r)/2,pos*2);      //pos*2��pos������  //��߲��Ǻ����
//		build((l+r)/2+1,r,pos*2+1);  //pos*2+1��pos���Һ���
//		tree[pos].minV = min(tree[pos*2].minV,tree[pos*2+1].minV);
//	}
//}
//
//int query(int l,int r,int pos){    //�ӽڵ�pos��ʼ��������[l,r]����Сֵ
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
//		//��ʾһ��ѯ��
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