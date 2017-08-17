#include<iostream>
using namespace std;

//递归https://hihocoder.com/contest/hiho163/problem/1
//这貌似是第一次投递hiho?对于他投递的形式还不太熟悉，所以在提交的时候费了一点时间，不过这题提交通过率好高的啊，87%。这题我有参考网上。。。
//Hilbert是一种填充曲线，可以线性的贯穿二维或者更高维度每个离散单元，并且仅仅穿过一次，对每个离散单元进行线性排序和编码
//将这个编码作为该单元的唯一标识。空间填充曲线可以将高维空间中没有良好顺序的数据映射到一维空间，经过这种编码后，空间上
//相邻的对象会临近的存储在一起，减少IO时间，提高内存中数据处理效率。
//这题其实就是一个基础图形，在不断的按照一个规则进行复制。那么解题的思路就是考虑Hn中(x,y)是在左下、左上还是右上右下，然后就可以根据这个条件来
//书写不同条件下递归的式子

long long HilbertNumber(int n ,int x ,int y){
	if(n == 0) return 1;
	int m = 1<<(n-1);

	if(x <= m && y <= m){
		return HilbertNumber(n-1,y,x);
	}
	if(x <= m && y > m){
		return 1LL*m*m + HilbertNumber(n-1,x,y-m);
	}
	if(x > m && y > m){
		return 2LL*m*m + HilbertNumber(n-1,x-m,y-m);
	}
	if(x > m && y <= m){
		return 3LL*m*m + HilbertNumber(n-1,m+1-y,2*m+1-x);
	}
}

int main(){
	int n,x,y;
	cin >> n >> x >> y;
	long long result = HilbertNumber(n,x,y);
	cout<<result<<endl;
	return 0;
}