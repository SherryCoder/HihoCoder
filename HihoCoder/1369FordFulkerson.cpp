//网络流的题目，求最大流，使用了ford-fulkerson方法
//检测网咯中的增广路径，若存在增广路径，就更新残差网络
//解决网络流的基本思路就是寻找增广路，不断更新残留网络，直到找不到新的增广路，此时得到的流就是该网络的最大流
//#include<iostream>
//#include<vector>
//using namespace std;
//const int MAX = 501;
//vector<int> edge[MAX];
//int N,M,flow[MAX],path[MAX],cf[MAX][MAX],queue[MAX];
//bool visit[MAX];
//int findAugmentPath(){
//	memset(flow,0,sizeof(flow));
//	memset(path,0,sizeof(path));
//	memset(queue,0,sizeof(queue));
//	memset(visit,0,sizeof(visit));
//	int cnt = 0;
//	int i = 0;
//	queue[cnt] = 1;
//	flow[1] = 1000;
//	visit[1] = true;
//	while(i<=cnt){
//		int cur = queue[i++];
//		if(cur == N) return flow[N];
//		for(int j = edge[cur].size() - 1;j>=0;--j){
//			int next = edge[cur][j];
//			if(cf[cur][next] && !visit[next]){
//				flow[next] = min(cf[cur][next],flow[cur]);
//				path[next] = cur;
//				visit[next] = true;
//				queue[++cnt] = next;
//			}
//		}
//	}
//	return 0;
//}
//
//void modifyGraph(){
//	int T = N;
//	while(path[T]){
//		cf[path[T]][T] -= flow[N];
//		cf[T][path[T]] += flow[N];
//		T = path[T];
//	}
//}
//int main(){
//	cin>>N>>M;
//	int u,v,c;
//	for(int i = 0;i < M;i++){
//		cin>>u>>v>>c;
//		edge[u].push_back(v);
//		cf[u][v] += c;
//	}
//	int ans = 0,tmp;
//	while(tmp = findAugmentPath()){
//		ans += tmp;
//		modifyGraph();
//	}
//	cout<<ans<<endl;
//	return 0;
//}