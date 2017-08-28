#include<iostream>
#include<vector>
#include<string>
using namespace std;


//对于一个01字符串，你每次可以将一个0修改成1，或者将一个1修改成0。
//最少需要修改多少次才能把一个01串 S 变为有序01字符串(有序01字符串是指满足所有0在所有1之前的01串)
//讨论区提供的解题思路，将所有的变换后的可能性都列出来，然后一一比较，这样的时间复杂度是O(len^2)，是可以AC的
//我在思考的时候没有考虑到可以把所有的结果都列出来，然后一一的比较(.....)


int SortzeroOneString(string zeroOne){
	int len = zeroOne.size();
	vector<vector<char>> situations(len+1);

	for(int i = 0;i < len + 1;i++){
		situations[i].resize(len,'0');
	}
	for(int i = 1;i < len + 1;i++){
		for(int j = len-i;j < len;j++){
			situations[i][j] = '1';
		}
	}
	int mintime = INT_MAX;
	for(int i = 0;i < len + 1;i++){          //复杂度为O(|len|^2)
		int changeCnt = 0;
		for(int j = 0;j < len;j++){
			if(situations[i][j] != zeroOne[j]){
				changeCnt++;
			}
		}
		if(changeCnt < mintime){
			mintime = changeCnt;
		}
	}
	return mintime;
}
//第二种解法，时间复杂度只要O(len)，因为算出了每个前缀有多少1和后缀有多少0，能够知道要修改多少下。
int SortzeroOneString_two(string zeroOne){
	int mintime = 10001;
	int len = zeroOne.size();
	int cnt0 = 0;
	int cnt1 = 0;
	for(int i = 0; i < len;i++){
		for(int j = i -1; j>=0;j--){
			cnt0 += (zeroOne[j] == '0' ? 0 : 1);
		}
		for(int j = i;j < len;j++){
			cnt1 += (zeroOne[j]=='1' ? 0: 1);
		}
		mintime = min(mintime,cnt1+cnt0);
	}
	return mintime;
}

//int main(){
//	int T;
//	cin>>T;
//	string zeroOne;
//	vector<int> result;
//	while(T){
//		cin>>zeroOne;
//		int mintimes;
//		mintimes = SortzeroOneString(zeroOne);
//		result.push_back(mintimes);
//		T--;
//	}
//	for(int i = 0;i < result.size();i++){
//		cout<<result[i]<<endl;
//	}
//	return 0;
//}