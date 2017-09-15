//#include<iostream>
//#include<vector>
//using namespace std;
//int weeks;
//int cor[100005][2];
//int board[1000][1000];
//int unionSet[1000*1000];
//int d[4][2] = {-1,0,0,-1,1,0,0,1};
//
////http://blog.csdn.net/dm_vincent/article/details/7655764 并查集的参考网址
////这题是求海岛的面积、周长、个数  有参考网上，因为在求海盗个数这个问题上，觉得不是很容易解决
//
//int find(int value){
//	return  unionSet[value] == value?value:find(unionSet[value]); 
//}
//void Solve(){
//	int islandCnt = 0,area = 0,cir = 0;
//	for(int i = 0;i < 1000*1000;i++){
//		unionSet[i] = i;
//	}
//	for(int i = 1;i <= weeks;i++){
//		board[cor[i][0]][cor[i][1]] = 1;
//		int id = cor[i][0]*1000+cor[i][1];
//		area++;cir+=4;islandCnt++;
//		for(int j = 0;j < 4;j++){
//			int nx = cor[i][0]+d[j][0],ny = cor[i][1] + d[j][1];
//			if(nx >=0 && nx < 1000 && ny>=0 && ny < 1000 && board[nx][ny]==1){
//				int tid = nx*1000+ny;
//				int tmpid = find(tid);
//				int cid = find(id);
//				if(tmpid!=cid){
//					islandCnt--;
//					unionSet[cid] = tmpid;
//				}
//				cir -= 2;
//			}
//		}
//		cout<< islandCnt <<" "<< area<<" " <<cir<<endl;
//	}
//
//}
//
//int main(){
//	cin>>weeks;
//	for(int i = 1;i <= weeks;i++){
//		cin>>cor[i][0]>>cor[i][1];
//	}
//	Solve();
//	//for(int i = 0;i < weeks;i++){
//	//	cout<<board[i][0]<<"  "<<board[i][1]<<endl;
//	//}
//	return 0;
//}