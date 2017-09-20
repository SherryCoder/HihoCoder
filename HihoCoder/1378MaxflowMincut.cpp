//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//const int MAX = 501;
//int N,M;
//int cf[MAX][MAX],queue[MAX],path[MAX],flow[MAX];
//vector<int> edge[MAX];
//bool visited[MAX];
//
////网络流2，求最大流最小割，返回最大流数也就是最小割的容量，最小割s集合的点数，以及s集合的点编号
////与上一题1368中用fordfulkerson方法类似，这边需要在计算完最大流后，BFS图，统计出最小割S集，也就是所有
////原点s可以到达的点
//void findCut(int maxFlow){
//	int i = 0;
//	int tail = 0;
//	memset(queue,0,sizeof(queue));
//	memset(visited,0,sizeof(visited));
//	queue[tail] = 1;
//	visited[1] = true;
//	while(i<=tail){
//		int cur = queue[i];
//	//	if(cur == N) break;
//		for(int k = 0;k < edge[cur].size();k++){
//			int next = edge[cur][k];
//			if(cf[cur][next]>0 && !visited[next]){
//				queue[++tail] = next;
//				visited[next] = true;
//			}
//		}
//		i++;
//	}
//	sort(queue,queue+tail+1);
//	cout<<maxFlow<<" "<<tail+1<<endl;
//	for(int i = 0;i < tail+1;i++){
//		cout<<queue[i]<<" ";
//	}
//	cout<<endl;
//
//}
//int findAugmentPath(){
//	memset(path,0,sizeof(path));
//	memset(flow,0,sizeof(flow));
//	memset(visited,0,sizeof(visited));
//	memset(queue,0,sizeof(queue));
//	int tail=0,i = 0;
//	queue[tail] = 1;
//	flow[1] = 1000;
//	visited[1] = true;
//	while(i<=tail){
//		int cur = queue[i++];
//		if(cur == N) return flow[N];
//		for(int k = 0;k < edge[cur].size();k++){
//			int next = edge[cur][k];
//			if(cf[cur][next] > 0 && !visited[next]){
//				queue[++tail] = next;
//				flow[next] = min(cf[cur][next],flow[cur]);
//				path[next] = cur;
//				visited[next] = true;
//			}
//		}
//	}
//	return 0;
//}
//
//void modifyGraph(){
//	int T = N;
//	while(T){
//		cf[path[T]][T] -= flow[N];
//		cf[T][path[T]] += flow[N];
//		T = path[T];
//	}
//}
//
//// 52
//
//int main(){
//	cin>>N>>M;
//	int u,v,c;
//	for(int i = 0;i < M;i++){
//		cin>>u>>v>>c;
//		edge[u].push_back(v);
//		cf[u][v] += c;
//	}
//	int temp;
//	int maxflow=0;
//	while(temp = findAugmentPath()){
//		maxflow += temp;
//		modifyGraph();
//	}
//	 findCut(maxflow);
//	 return 0;
//}