//#include<iostream>
//#include<vector>
//using namespace std;
////����һ�����νṹ����Ŀ�������漰������ȱ���(breadth first search)
//vector<int>nodetime ,vertex,prenode,rightchild,node;
//long long sum = 0;     //�������long long ���ͣ����ڴ���������ӻ�Խ��
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
//	int N;  //�ڵ���Ŀ
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
//		prenode[length] = rightchild[u];        //prenode�м�¼�����뵱ǰvͬһ�����׽ڵ����v��ߵĽڵ��vertexֵ
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
//////������ȱ������ȱ������׽ڵ㣬�ٴӸ��׽ڵ�����ҽڵ㿪ʼ����
////long long dfs(long long fa) {
////	long long ret = 0;
////	long long son = 0;
////	long long s = 0;
////	long long num = 0;
////	int k=tail[fa];          //����fa�ӽڵ�����ҽڵ���vetex�е��±�
////	while (k) {
////		son = dfs(vertex[k]);     //������v[k]Ϊ������ӽṹ���ϸýڵ�Ĵ���ʱ����������Ĵ���ʱ��
////		s += son;				//��������е���ʱ��
////		ret=Max(ret,son);	   //��faΪ���ڵ�����νṹ������ʱ����ķ�֧Ҫ����retʱ��	
////		++num;					//��faΪ���ڵ�����νṹ�ܹ��ж��ٸ���֧
////		k=nex[k];          //����vertex���±�Ϊk�Ľڵ��ǰһ���ڵ���vetex�е��±�
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
////		vertex[++length]=v;      //vertex����˳�������һ��һ�еļ�¼���ṹ�еĽڵ����
////		nex[length]=tail[u];     //���uû���ӽڵ�Ļ���tail�϶��Ƿ���0������nexҲ����0��uֻ��һ���ӽڵ㣬nexҲ�Ƿ���0�����u֮ǰ�Ѿ����ù��������ӽڵ㣬��ô���صľ�����һ���ֽڵ���vetex�е��±�
////		tail[u]=length;         //tail��¼����u�ڵ�Ϊ���׽ڵ�������ӽڵ���vertex�е���ţ������������vertex�����е������
////		f[v]=u;              //f���±���Ҷ�ӽڵ㣬�������ĸ��׽ڵ�
////	}
////	
////	for (int i=1;i<=n;i++)
////		if (f[i]==0) root=i;   //���һ���ڵ�ĸ��׽ڵ����0����ô����ڵ���Ǹ��ڵ�
////	
////	dfs(root);				//�Ը��ڵ���й�����ȱ���
////	
////	printf("%lld\n",sum);
////	return 0;
////}