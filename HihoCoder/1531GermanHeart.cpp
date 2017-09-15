//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//const int total = 10000000;
//int playerN,operateK;
//vector<vector<int>> eachPlayer;
////德国心脏病游戏
////按照游戏规则一步一步的写就可以
//int main(){
//	cin>>playerN;
//	cin>>operateK;
//	eachPlayer.resize(playerN);
//	for(int i = 0;i < playerN;i++){
//		eachPlayer[i].resize(7);
//	}
////	Operater.resize(playerN);
//	vector<int>cardN(playerN,total);
//	vector<int>fruitanimalN(7,0);
//	int curPlayer = 0;;
//	int curCnt=0;
//	for(int i = 0;i < operateK;i++){
//		string opName;
//		cin>>opName;
//		if(opName == "Fruit"){
//			int num;
//			cin>>num;
//			for(int j = 0;j < 7;j++){
//				fruitanimalN[j] -= eachPlayer[curPlayer][j]; 
//				eachPlayer[curPlayer][j] = 0;
//			}
//
//			for(int j = 0;j < num;j++){
//				int type;
//				cin>>type;
//				fruitanimalN[type]++;
//				eachPlayer[curPlayer][type]++;
//			}
//			curCnt++;
//			cardN[curPlayer]--;
//			curPlayer = curPlayer + 1>playerN-1?0:curPlayer+1;
//		}else if(opName == "Animal"){
//			for(int j = 0;j < 7;j++){
//				fruitanimalN[j] -= eachPlayer[curPlayer][j]; 
//				eachPlayer[curPlayer][j] = 0;
//			}
//			int type;
//			cin>>type;
//			fruitanimalN[4+type]++;
//			eachPlayer[curPlayer][4+type]++;
//			curCnt++;
//			cardN[curPlayer]--;
//			curPlayer = curPlayer + 1>playerN-1?0:curPlayer+1;
//		}else if(opName == "Ring"){
//			int player;
//			cin>>player;
//			bool win = false;
//			int nonZero = 0;
//			for(int j = 0;j < 4;j++){
//				if(fruitanimalN[j]==5)
//					win = true;
//				if(fruitanimalN[j]>0){
//					nonZero++;
//				}
//			}
//			if(fruitanimalN[4]>0&&fruitanimalN[3]==0&&(fruitanimalN[0]>0||fruitanimalN[1]>0||fruitanimalN[2]>0)){
//				win = true;
//			}
//			if(fruitanimalN[5]>0 && fruitanimalN[1]==0 && (fruitanimalN[0]>0||fruitanimalN[2]>0||fruitanimalN[3]>0)){
//				win = true;
//			}
//			if(fruitanimalN[6]>0 && nonZero >0){
//				win = true;
//			}
//			if(win == true){
//				cardN[player] += curCnt;
//				curCnt = 0;
//				for(int j = 0;j < 7;j++) fruitanimalN[j] = 0;
//				curPlayer = player;
//			}else{
//				cardN[player] -= playerN;
//				for(int j = 0;j < playerN ;j++){
//					cardN[j]++;
//				}
//				curPlayer = player;
//			}
//		}
//	}
//	for(int i = 0;i < playerN;i++){
//		cout<<cardN[i]<<endl;
//	}
//}