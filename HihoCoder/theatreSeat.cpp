//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////https://hihocoder.com/problemset/problem/1563?sid=1161929
////这题是一个二分法，抽象起来就是在一个数组中，遍历以每个元素为中心，向左扩展N个符合要求的元素向右扩展N个符合要求的元素，
////使得符合要求的元素到中心元素的距离最短。
////参考网上代码
////解法中比较值得学习的地方：用一个数组disHead来记录在这个元素之前符合要求的元素到第一个元素的距离之和，这很巧妙，使得最后计算距离变得很
////简单。
//#define MOD 1000000007
//int main(){
//	int N; //N个座位
//	int M; //总人数
//	cin>>N;
//	cin>>M;
//	vector<int>seats(2*N + 4);
//	vector<long long>zeroCnt(2*N + 4,0);
//	vector<long long>disHead(2*N + 4,0); 
//	zeroCnt[0] = 0;
//	disHead[0] = 0;
//	long long minDis = 1ll<<59;
//	for(int i = 1;i <= N;i++){
//		cin>>seats[i];
//		seats[N + i] = seats[i];
//	}
//	for(int i = 1;i <= 2*N;i++){
//		zeroCnt[i] = zeroCnt[i-1] + 1-seats[i];
//		disHead[i] = disHead[i-1];
//		if(!seats[i]) disHead[i] += i;
//	}
//	if(zeroCnt[N] < M){    //空座位不够时，返回-1
//		cout<<-1<<endl;
//		return 0;
//	}
//	int need = (M+1)/2;
//	for(int i = need;i <= 2*N;i++){
//		int l1 = 1;
//		int r1 = i;
//		while(l1 < r1){
//			int mid = (l1+r1)/2;
//			if(l1 == r1-1){
//				if(zeroCnt[i] - zeroCnt[l1] >= need) l1++;
//				break;
//			}
//			if(zeroCnt[i] - zeroCnt[mid-1] >= need) l1 = mid;
//			else r1 = mid -1;
//		}
//
//		int halfneed = need;
//		if(!seats[i] && M%2 ==0){
//			halfneed++;
//		}
//		int l2 = i,r2 = 2*N;
//		while(l2<r2){
//			int mid = (l2+r2)/2;
//			if(zeroCnt[mid] - zeroCnt[i-1] >= halfneed){
//				r2 = mid;
//			}else{
//				l2 = mid + 1;
//			}
//		}
//		if(l2 > 2*N || zeroCnt[l2] - zeroCnt[i-1] < halfneed) continue;
//		if(l1 < 1 || zeroCnt[i]-zeroCnt[l1-1] < need) continue;
//		long long result = need*i - (disHead[i] - disHead[l1-1]) + (disHead[l2] - disHead[i-1])-i*halfneed;
//		minDis = min(minDis,result);
//	}
//	cout<< minDis<<endl;
//
//	return 0;
//}
//
