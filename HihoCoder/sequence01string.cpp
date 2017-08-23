#include<iostream>
#include<vector>
#include<string>
using namespace std;


//����һ��01�ַ�������ÿ�ο��Խ�һ��0�޸ĳ�1�����߽�һ��1�޸ĳ�0��
//������Ҫ�޸Ķ��ٴβ��ܰ�һ��01�� S ��Ϊ����01�ַ���(����01�ַ�����ָ��������0������1֮ǰ��01��)
//�������ṩ�Ľ���˼·�������еı任��Ŀ����Զ��г�����Ȼ��һһ�Ƚϣ�������ʱ�临�Ӷ���O(len^2)���ǿ���AC��
//����˼����ʱ��û�п��ǵ����԰����еĽ�����г�����Ȼ��һһ�ıȽ�(.....)


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
	for(int i = 0;i < len + 1;i++){          //���Ӷ�ΪO(|len|^2)
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
//�ڶ��ֽⷨ��ʱ�临�Ӷ�ֻҪO(len)����Ϊ�����ÿ��ǰ׺�ж���1�ͺ�׺�ж���0���ܹ�֪��Ҫ�޸Ķ����¡�
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

int main(){
	int T;
	cin>>T;
	string zeroOne;
	vector<int> result;
	while(T){
		cin>>zeroOne;
		int mintimes;
		mintimes = SortzeroOneString(zeroOne);
		result.push_back(mintimes);
		T--;
	}
	for(int i = 0;i < result.size();i++){
		cout<<result[i]<<endl;
	}
	return 0;
}