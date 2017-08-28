#include<iostream>
#include<vector>
#include<math.h>   //在hiho中，提交代码不要用math，不支持
#include<iomanip>
using namespace std;
//accpet
int main(){
	int N ;//测试数据的组数
	cin >> N;
	vector<double>result;
	for(int i = 0;i < N;i++){
		int h,m,s,t;
		cin>>h>>m>>s>>t;
		s = s+t;
		m = m + s/60;
		h = h + m/60;
		s = s%60;
		m = m%60;
		h = h%12;
		double re = fabs(5.5 * m - 30*h + 0.1*s- s/120.0);
		if(re > 180){
			re = 360 - re;
		}
		result.push_back(re);
	}
	for(int i = 0;i < N;i++){
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<result[i]<<endl;
		//printf("%.4lf\n",result[i]);
	}
	
	return 0;
}