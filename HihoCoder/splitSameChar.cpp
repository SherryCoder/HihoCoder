//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////��̰���㷨
////�ο������ϵ�
////������Ҫȷ��ʲôʱ����invalid�ģ����ǵ�ĳһ����ĸ����������(len+1)/2��ʱ��
////ÿ�ΰ���'a'-'z'ö��һ���ַ�����ȥ���ַ���ʣ����ַ�Ӧ����Ȼ�ǿ���valid��
//int table[200];
//int check(char ch){
//	if(table[ch] == 0) return 0;
//	int sum = 0;
//	int maxch = 0;
//	for(int i = 'a';i <= 'z';i++){
//		sum += table[i];
//		maxch = max(maxch, i==ch?(table[ch]-1):table[i]);
//	}
//	if(maxch*2 > sum ) return 0;
//	else return 1;
//}
//
//int main(){
//	string s;
//	cin>>s;
//	if(s.empty() || s.size() == 1){
//		return 0;
//	}
//	for(int i = 0;i < s.size();i++){
//		table[s[i]]++;
//	}
//	int i ;
//	s[0] = '.';
//	s.push_back(s[0]);
//	for( i = 1;i < s.size();){
//		int j;
//		for(j = 'a';j <= 'z';j++){
//			if(check(j) && j != s[i-1]){
//				s[i++] = j;
//				table[j]--;
//				break;
//			}
//		}
//		if(j > 'z'){
//			break;
//		}
//	}
//	if(i-1 == s.size()-1){
//		for(int k = 1;k < s.size();k++){
//			cout<<s[k];
//		}
//		cout<<endl;
//	}
//	else cout<<"INVALID"<<endl;
//
//	return 0;
//}