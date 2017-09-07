////#include <bits/stdc++.h>
//#include<iostream>
//#include<vector>
//using namespace std;
//
//typedef long long LL;
//const LL mod = 1e9+7;
//const int maxn = 11;
//
//typedef struct Matrix {
//    LL m[maxn][maxn];
//    int r, c;
//    Matrix(){
//        r = c = 0;
//        memset(m, 0, sizeof(m));
//    } 
//} Matrix;
//Matrix mul(Matrix m1, Matrix m2, LL mod) {
//    Matrix ans = Matrix();
//    ans.r = m1.r; ans.c = m2.c;
//    for(int i = 0; i < m1.r; i++) {
//        for(int j = 0; j < m2.r; j++) {
//            for(int k = 0; k < m2.c; k++) {
//                if(m2.m[j][k] == 0) continue;
//                ans.m[i][k] = (ans.m[i][k] + (m1.m[i][j] * m2.m[j][k]) % mod) % mod;
//            }
//        }
//    }
//    return ans;
//}
////矩阵快速幂乘法，将n个矩阵m相乘，返回结果矩阵
//
//Matrix quickmul(Matrix m, LL n, LL mod) {
//    Matrix ans = Matrix();
//    for(int i = 0; i < m.r; i++) ans.m[i][i] = 1; //单位矩阵，相当于求快速幂时的ans = 1
//    ans.r = m.r;
//    ans.c = m.c;
//    while(n) {
//        if(n & 1) ans = mul(m, ans, mod);
//        m = mul(m, m, mod);
//        n >>= 1;
//    }
//    return ans;
//}
//
//LL n;
//int k;
//
//signed main() {
//    // freopen("in", "r", stdin);
//    while(~scanf("%lld%d",&n,&k)) {
//        Matrix p; p.r = p.c = 10;
//        for(int i = 0; i <= min(k, 9); i++) {
//            for(int j = 0; j <= min(k, 9); j++) {
//                if(i * j <= k) p.m[i][j] = 1;
//            }
//        }
//        p = quickmul(p, n-1LL, mod);
//		for(int i = 0;i < p.c;i++){
//			for(int j = 0;j < p.r;j++){
//				cout<<p.m[i][j]<<" ";
//			}
//			cout<<endl;
//		}
//        LL ret = 0;
//        for(int i = 0; i <= min(k, 9); i++) {
//            for(int j = 1; j <= min(k, 9); j++) {  //因为最后得到的转换矩阵要乘以f(1)，第一列是乘以0的，所以不需要考虑
//                ret += p.m[i][j];
//                ret %= mod;
//            }
//        }
//        printf("%lld\n", ret);
//    }
//    return 0;
//}