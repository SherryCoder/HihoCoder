//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
////����ܼ򵥣���Ҫ�����ж�һ��ĳ�����Ƿ����������Լ�������
//
//int N;     //�û������ż��
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