//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
//int main(){
//	string s;
//	cin>>s;
//	if(s.empty() || s.size() == 1){
//		return 0;
//	}
//	sort(s.begin(),s.end());     //对输入的字符串先按照字典排序
//
//	for(int i = 0;i < s.size()-1;i++){
//		if(s[i+1] == s[i]){
//			int j ;
//			for(j = i+1;j < s.size();j++){
//				if(s[j] > s[i+1]){
//					char t = s[j];
//					s[j] = s[i+1];
//					s[i + 1] = t;
//					break;
//				}
//			}
//			if(j == s.size()){
//				cout<<"INVALID"<<endl;
//				return 0;
//			}
//		}
//	}
//	for(int i = 0;i < s.size()-1;i++){
//		if(s[i+1] == s[i]){
//			cout<<"INVALID"<<endl;
//			return 0;
//		}
//	}
//
//	for(int i = 0;i < s.size();i++){
//		cout<<s[i];
//	}
//	cout<<endl;
//	return 0;
//}