//#include<iostream>
//#include<vector>
//using namespace std;
////通过，不难
//int main(){
//	int N;
//	cin>> N;
//	vector<int> board;
//	for(int i = 0;i < N;i++){
//		int temp ;
//		cin >> temp;
//		board.push_back(temp);
//	}
//	int Q;
//	cin >> Q;
//	for(int i = 0;i < Q;i++){
//		int X;
//		cin>>X;
//		if(X == 1){
//			int Y;
//			cin>>Y;
//			int chance = 0;
//			if(Y <= N){
//				chance=1;	
//			}
//			else{
//				break;
//			}
//			while(Y <= N &&board[Y-1]+Y <= N){
//				chance++;
//				Y = board[Y-1]+Y;
//			}
//			cout<<chance<<endl;
//			
//		}else{
//			int u,v;
//			cin>>u>>v;
//			board[u-1] = v;
//		}
//	}
//
//}