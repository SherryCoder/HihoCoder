//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//vector<int>data;
//long long sum1=0,sum2=0,sum3=0;
//long long cnt = 0;
//
////用这种方法会超时
//void check(){
//	if(abs(sum1-sum2)<=1 && abs(sum2-sum3)<=1 && abs(sum3-sum1)<=1){
//		cnt++;
//	}
//}
//int main(){
//	int N;
//	cin>>N;
//	if(N < 3){
//		cout<<0<<endl;
//		return 0;
//	}
//	long long sum = 0;
//	for(int i = 0;i < N;i++){
//		int temp;
//		cin>>temp;
//		data.push_back(temp);
//		sum += temp;
//	}
//	for(int i = 0;i < N-2;i++){
//		sum1 += data[i];
//		sum3 = 0;
//		for(int j = N-1;j >1 && j-i>1;j--){
//			sum3 += data[j];
//			sum2 = sum - sum1 - sum3;
//			check();
//		}
//	}
//	cout<<cnt<<endl;
//}