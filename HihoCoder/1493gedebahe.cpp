//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
////这题很简单，主要就是判断一下某个数是否是质数（自己做出）
//
//int N;     //用户输入的偶数
//bool IsPrime(int num){
//	if(num == 1)
//		return false;
//	if(num == 2)
//		return true;
//	for(int i = 2;i <= sqrt((double)num);i++){
//		if(num%i == 0) 
//			return false;
//	}
//	return true;
//}
//
//int main(){
//	cin>>N;
//	for(int i = 2;i<=N/2;i++){
//		if(IsPrime(i)){
//			int temp = N-i;
//			if(IsPrime(temp)){
//				cout<<i<<" "<<temp<<endl;
//				return 0;
//			}
//		}
//	}
//	/*bool result = IsPrime(N);
//	cout<<result<<endl;*/
//	return 0;
//}