//#include<iostream>
//#include<vector>
//using namespace std;
////这是一个树形结构的题目，好像还涉及广度优先遍历(breadth first search)
//vector<int>nodetime ,vertex,prenode,rightchild,node;
//long long sum = 0;     //如果不是long long 类型，对于大整数的相加会越界
//int dfs(int root){
//	long long childtime = 0;
//	int cnt = 0;
//	long long realtime = 0;
//	long long maxctime = 0;
//	int k = rightchild[root];
//	while(k){
//		childtime = dfs(vertex[k]);
//		realtime = realtime + childtime;
//		maxctime = maxctime > childtime ? maxctime:childtime;
//		cnt++;
//		k = prenode[k];
//	}
//	sum = sum + maxctime*cnt - realtime;;
//	return maxctime + nodetime[root];
//}
//
//int main(){
//	int N;  //节点数目
//	cin>>N;
//	nodetime.push_back(-1);
//	for(int i = 1;i <= N;i++){
//		int tmp;
//		cin>>tmp;
//		nodetime.push_back(tmp);
//	}
//	vertex.resize(N + 4);prenode.resize(N + 4);rightchild.resize(N + 4),node.resize(N+4);
//	int length = 0;
//	for(int i = 1;i< N ;i++){
//		int u,v;
//		cin>>u>>v;
//		vertex[++length] = v;
//		prenode[length] = rightchild[u];        //prenode中记录的是与当前v同一个父亲节点的在v左边的节点的vertex值
//		rightchild[u] = length;
//		node[v] = u;
//	}
//	int root;
//	for(int i = 1;i <= N;i++){
//		if(node[i] == 0) 
//			root = i;
//	}
//	dfs(root);
//	cout<<sum<<endl;
//	return 0;
//}
//
////#include <cstring>
////#include <cstdio>
////#include <algorithm>
////#include <iostream>
////
////using namespace std;
////
////const int Maxn=1e5+1;
////
////long long a[Maxn],n,nex[Maxn],vertex[Maxn],length,tail[Maxn],f[Maxn],root,sum,u,v;
////
////long long Max(long long a,long long b) {
////	if (a>b) return a;
////	return b;
////}
//////深度优先遍历，先遍历父亲节点，再从父亲节点的最右节点开始遍历
////long long dfs(long long fa) {
////	long long ret = 0;
////	long long son = 0;
////	long long s = 0;
////	long long num = 0;
////	int k=tail[fa];          //返回fa子节点的最右节点在vetex中的下标
////	while (k) {
////		son = dfs(vertex[k]);     //返回以v[k]为顶点的子结构加上该节点的处理时间所需的最大的处理时间
////		s += son;				//这边是所有的总时间
////		ret=Max(ret,son);	   //以fa为跟节点的树形结构，花费时间最长的分支要花费ret时间	
////		++num;					//以fa为根节点的树形结构总共有多少个分支
////		k=nex[k];          //返回vertex中下标为k的节点的前一个节点在vetex中的下标
////	}
////	
////	sum += num*ret-s;
//////	cout<<fa<<" "<<ret<<endl;
////	return ret+a[fa];
////}
////
////int main() {
////	scanf("%lld",&n);
////	for (int i=1;i<=n;i++) scanf("%lld",&a[i]);
////	for (int i=1;i<n;i++) {
////		scanf("%lld %lld",&u,&v);
////		vertex[++length]=v;      //vertex是以顺序遍历，一行一行的记录树结构中的节点序号
////		nex[length]=tail[u];     //如果u没有子节点的话，tail肯定是返回0，所以nex也就是0，u只有一个子节点，nex也是返回0，如果u之前已经被用过并且有子节点，那么返回的就是上一个字节点在vetex中的下标
////		tail[u]=length;         //tail记录的是u节点为父亲节点的最右子节点在vertex中的序号，它是用来标记vertex数组中的情况的
////		f[v]=u;              //f的下标是叶子节点，返回它的父亲节点
////	}
////	
////	for (int i=1;i<=n;i++)
////		if (f[i]==0) root=i;   //如果一个节点的父亲节点等于0，那么这个节点就是根节点
////	
////	dfs(root);				//对跟节点进行广度优先遍历
////	
////	printf("%lld\n",sum);
////	return 0;
////}