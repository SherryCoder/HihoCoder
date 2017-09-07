//#include<iostream>
//#include<vector>
//using namespace std;
//
////int res[20];
////int N,k;
////void output(){
////	for(int i = 1;i <= N;i++ ){
////		cout<<res[i];
////	}
////	cout<<endl;
////}
////
////void dfs(int m){
////	for(int i = 0;i <=k;i++){
////		if(res[m-1]*i <= k){
////			res[m] = i;
////			if(m == N) output();
////			else dfs(m+1);
////		}
////	}
////}
//
//void DFS(vector<int>&res,int cur_len,int N,int k){
//	if(cur_len == N){
//		for(int i = 0;i < res.size();i++){
//			cout<<res[i];
//		}
//		cout<<endl;
//		return ;
//	}
//	for(int i = (cur_len == 0?1:0);i <= k;i++){
//		if((res.empty() || i*res.back()<=k )){
//			res.push_back(i);
//			DFS(res,cur_len + 1,N,k);
//			res.pop_back();
//		}
//	}
//}
//
//int main(){
//	//cin>>N>>k;
//	//if(N == 1){
//	//	for(int i = 1;i<=k;i++){
//	//		cout<<i<<endl;
//	//	}
//	//	return 0;
//	//}
//	//for(int i = 1;i <=k ;i++){
//	//	res[1] = i;
//	//	dfs(2);
//	//}
//	int n ,k;
//	cin>>n>>k;
//	vector<int> res;
//	DFS(res,0,n,k);
//
//	return 0;
//}