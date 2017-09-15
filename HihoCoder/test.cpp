//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <map>
//#include <cmath>
//using namespace std;
//typedef long long LL;
//const int MAXN = 1e5 + 10;
//
//LL a[MAXN], sum[MAXN];
//
//int main() {
//    //freopen("in.txt", "r", stdin);
//    int n;
//    scanf("%d", &n);
//    map <LL, LL> mp;
//    for (int i = 1; i <= n; i++) {
//        scanf("%lld", &a[i]);
//        sum[i] = sum[i - 1] + a[i];
//        mp[sum[i]]++;
//    }
//    LL ans = 0;
//    mp[sum[n]]--;
//    for (int i = 1; i < n - 1; i++) {
//        mp[sum[i]]--;
//        for (int j = -1; j <= 1; j++) {
//            LL x = sum[i], y = sum[i] + j, z = sum[n] - y - x;
//            if (abs(x - y) <= 1 && abs(x - z) <= 1 && abs(y - z) <= 1) {
//                ans += mp[sum[i] + y];
//            }
//        }
//    }
//    printf("%lld\n", ans);
//    return 0;
//}