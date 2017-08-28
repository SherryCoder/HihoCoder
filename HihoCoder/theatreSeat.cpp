//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//#define MOD 1000000007
//int main(){
//	int N; //N个座位
//	int M; //总人数
//	cin>>N;
//	cin>>M;
//	vector<int>seats;
//	int emptySeat = 0;;
//	for(int i = 0;i < N;i++){
//		int tmp;
//		cin>>tmp;
//		seats.push_back(tmp);
//		//cin>>seats[i];
//		if(tmp == 0){
//			emptySeat++;
//		}
//	}
//	if(emptySeat < M){    //空座位不够时，返回-1
//		cout<<-1<<endl;
//		return 0;
//	}
//	long long int minDistance = 10000000;
//	for(int k = 0;k < seats.size();k++){
//		vector<long long int> singleDis;
//		for(int i = 0;i < seats.size();i++){
//			if(seats[i] == 0 && i != k){
//				long long int dis = min(abs(i-k),(N+k-i));
//				singleDis.push_back(dis);
//			}
//		}
//		long long int distance = 0;
//		int len = singleDis.size();
//		sort(singleDis.begin(),singleDis.begin()+len);
//		for(int i = 0;i < M;i++){
//			distance = (distance + singleDis[i])%MOD;
//		}
//		minDistance = min(minDistance%MOD,distance);
//	}
//	cout<<minDistance<<endl;
//	return 0;
//}