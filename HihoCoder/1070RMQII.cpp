#include<iostream>
#include<vector>
using namespace std;
int N;
const int MAX = 1e4+2;
vector<int> weight;
int tree_node[MAX][MAX];

//用tree_node[i][j]表示在以i为左边界，长度为j的区间内的最小权值

void build_dfs(int node,int len){
	if(len == 1){
		tree_node[node][len] = weight[node];
		return;
	}
	build_dfs(node,len/2);
	build_dfs(node+len/2,len - len/2);
	tree_node[node][len] = min(tree_node[node][len/2],tree_node[node+len/2][len - len/2]);
}

int search_min(int s_L ,int s_len , int L , int len){
	if(s_L == L && s_len == len){
		return tree_node[s_L][s_len];	
	}
	if(L >= (s_L+s_len/2)){
		return search_min(s_L+s_len/2,s_len-s_len/2,L,len);
	}
	else if((L+len-1) < (s_L+s_len/2)){
		return search_min(s_L,s_len/2,L,len);
	}else{
		int l_len = s_L+s_len/2 - L;
		int r_len = len - l_len;
		int l_min = search_min(s_L,s_len/2,L,l_len);
		int r_min = search_min(s_L+s_len/2,s_len-s_len/2,L+l_len,r_len);
		int result = min(l_min,r_min);
		return result;
	}
}

void update(int s_L,int s_len,int pos,int value){
	if(s_L == pos && s_len ==1){
		tree_node[s_L][s_len] = value;
		return;
	}
	if(pos < s_L+s_len/2){
		update(s_L,s_len/2,pos,value);
	}else{
		update(s_L+s_len/2,s_len-s_len/2,pos,value);
	}
	tree_node[s_L][s_len] = min(tree_node[s_L][s_len/2],tree_node[s_L+s_len/2][s_len-s_len/2]);
}

int main(){
	cin>>N;
	weight.push_back(-1);
	for(int i = 1;i <= N;i++){
		int w;cin>>w;
		weight.push_back(w);
	}
	int Q;
	cin>>Q;
	build_dfs(1,N);

	while(Q){
		int type;
		cin>>type;
		//表示一个询问
		if(type == 0){
			int L,R;
			cin>>L>>R;
			int minv = search_min(1,N,L,R-L+1);
			cout<<minv<<endl;
		}else{
			int P,W;
			cin>>P>>W;
			update(1,N,P,W);
		}
		Q--;
	}

}
