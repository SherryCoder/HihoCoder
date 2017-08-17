#include<iostream>
using namespace std;

//�ݹ�https://hihocoder.com/contest/hiho163/problem/1
//��ò���ǵ�һ��Ͷ��hiho?������Ͷ�ݵ���ʽ����̫��Ϥ���������ύ��ʱ�����һ��ʱ�䣬���������ύͨ���ʺøߵİ���87%���������вο����ϡ�����
//Hilbert��һ��������ߣ��������ԵĹᴩ��ά���߸���ά��ÿ����ɢ��Ԫ�����ҽ�������һ�Σ���ÿ����ɢ��Ԫ������������ͱ���
//�����������Ϊ�õ�Ԫ��Ψһ��ʶ���ռ�������߿��Խ���ά�ռ���û������˳�������ӳ�䵽һά�ռ䣬�������ֱ���󣬿ռ���
//���ڵĶ�����ٽ��Ĵ洢��һ�𣬼���IOʱ�䣬����ڴ������ݴ���Ч�ʡ�
//������ʵ����һ������ͼ�Σ��ڲ��ϵİ���һ��������и��ơ���ô�����˼·���ǿ���Hn��(x,y)�������¡����ϻ����������£�Ȼ��Ϳ��Ը������������
//��д��ͬ�����µݹ��ʽ��

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