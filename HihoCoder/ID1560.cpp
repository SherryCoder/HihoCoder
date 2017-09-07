////#include<iostream>
////#include<vector>
////const long long MAX = 1e12+10;
////const long long mod = 1e9+7;
////using namespace std;
////long long table[11];
////
//////hiho#1560
//////数位dp是指给定一个数的长度的区间，问在这个区间内满足某个条件的数的个数
////long long solve(long long N,int k){
////	int num = k;
////	if(k>9){
////		num = 9;
////	}
////	if(N == 1){
////		for(int i = 1;i <= num;i++){
////			table[i] = 1;
////		}
////	}else{
////		long long pre = solve(N-1,k);
////		for(int i = 0;i <= num;i++ ){
////			int j ;
////			for(j = 0;j <= num;j++){
////				if(i*j > k){
////					break;
////				}
////			}
////			table[i] = pre - (num - j + 1);
////		}
////	}
////	long long result = 0;
////	for(int i = 0;i <= num;i++){
////		result = (result + table[i]%mod)%mod;
////	}
////	return result;
////}
////
////int main(){
////	long long N;
////	cin>>N; //输入整数的长度
////	int k;
////	cin>>k; //输入每位数字的最大值以及相邻两个数字的乘积不可以超过该数值
////	long long result;
////	result = solve(N,k)%mod;
////	cout<<result<<endl;
////	return 0;
////}
////
////#include <bits/stdc++.h>
//#include<iostream>
//#include<memory.h>
//using namespace std;
//
//const long long MAX = 1e12+10;
//const long long mod = 1e9+7;
//const long long mMax = 11;
//
//class matrix{
//public:
//	int r,c;
//	long long data[mMax][mMax];
//	matrix();
//	matrix friend operator*(matrix m1,matrix m2);
//};
//
//matrix::matrix(){
//	r = 0;
//	c = 0;
//	memset(data,0,sizeof(data));
//}
//
//matrix operator*(matrix m1,matrix m2){
//	matrix ans;
//	ans.r = m1.r;
//	ans.c = m2.c;
//	for(int i = 0;i < m1.r;i++){
//		for(int j = 0;j < m2.r;j++){
//			for(int k = 0;k < m2.c;k++){
//				if(m2.data[j][k] == 0) continue;
//				ans.data[i][k] = (ans.data[i][k] + (m1.data[i][j] * m2.data[j][k])%mod)%mod;
//			}
//		}
//	}
//	return ans;
//}
//matrix quickMul(matrix base,long long n){
//	matrix res;
//	for(int i = 0;i < base.r;i++){
//		res.data[i][i] = 1;
//	}
//	res.r = base.r;
//	res.c = base.c;
//	while(n){
//		if(n&1){
//			res = res*base;
//		}
//		base = base*base;
//		n>>=1;
//	}
//	return res;
//}
//
//int main(){
//	long long N;
//	cin>>N; //输入整数的长度
//	int k;
//	cin>>k; //输入每位数字的最大值以及相邻两个数字的乘积不可以超过该数值
//
//	matrix base;
//	base.r = 10;
//	base.c = 10;
//	for(int i = 0;i <= min(k,9);i++){
//		for(int j = 0;j <= min(k,9);j++){
//			if(i*j<=k) base.data[i][j] = 1;
//		}
//	}
//	base = quickMul(base,N-1);
//	long long result = 0;
//	for(int i = 0;i <= min(k,9);i++){
//		for(int j = 1;j <= min(k,9);j++){
//			result += base.data[i][j];
//			result = result%mod;
//		}
//	}
//	cout<<result<<endl;
//	return 0;
//}