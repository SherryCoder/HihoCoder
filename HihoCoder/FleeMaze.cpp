//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
////�����ǳ����Ĺ����������������������������ľ���Ѱ����С·����
////������һ���ڵ�node��һ�α��������������ҽڵ㣬�������������Ľڵ�ѡ����У��Ƚ��ȳ���
////�����ٴӶ��е�ͷ��ȡ��һ�����������Ľڵ㣬���������������ҽڵ㣬����ѭ����ȥ��ֱ��������Ԫ��Ϊ��
////��һ����v[x][y][sum]��ʾ���Թ�(x,y)λ�ô���Я����sum��Կ�ף����У�sum����ֵ��ͨ��λ����������ġ���Ϊ�������ֻ��5��Կ��
////���Կ�����0λ��״̬�����Ƿ�Я����A��Կ�ף�1λ��״̬��ʾ�Ƿ�Я����B��Կ�ף��Դ����ơ�
//int M,N,K,sx,sy,ex,ey;
//char Maze[105][105];
////vector<vector<int>>key;
//
//struct state{
//	int x,y,sum;
//}Key[10];
//int v[105][105][1<<6];
////int d[4][2] = {-1,0,0,-1,1,0,0,1};
//int d[4][2]={-1,0,0,-1,1,0,0,1};
//
//int bfs(int nx,int ny){
//	memset(v,0,sizeof v);
//	v[nx][ny][0] = 1;
//	queue<struct state>p;
//	struct state temp;
//	temp.x = nx;temp.y = ny;temp.sum = 0;
//	p.push(temp);
//
//	while(!p.empty()){
//		state cur = p.front();p.pop();
//		if(cur.x == ex && cur.y == ey)  return v[cur.x][cur.y][cur.sum] - 1; 
//		//state next= cur;
//		//nx = ny;ny = ny;next.sum = cur.sum;
//		for(int i = 0;i < 4;i++){
//			nx = cur.x + d[i][0];
//			ny = cur.y + d[i][1];
//			if(nx>=0&&nx<N && ny>=0&&ny<M && Maze[nx][ny]!='#'){
//
//				if(Maze[nx][ny]=='.' && v[nx][ny][cur.sum]==0)
//				{
//					v[nx][ny][cur.sum] = v[cur.x][cur.y][cur.sum] + 1;
//					struct state temp;
//					temp.x = nx;temp.y = ny;temp.sum = cur.sum;
//					p.push(temp);
//				}
//				else if(Maze[nx][ny]>='0' && Maze[nx][ny]<='5' )
//				{
//					int sum = cur.sum | (1<<(Maze[nx][ny]-'0')); //ͨ�������������ֵ����������������N��Կ���еĵڼ���
//					if(v[nx][ny][sum]) continue;
//					v[nx][ny][sum] = v[cur.x][cur.y][cur.sum] + 1;
//					struct state temp;
//					temp.x = nx;temp.y = ny;temp.sum = sum;
//					p.push(temp);
//				}
//				else if(Maze[nx][ny] >='A' && Maze[nx][ny]<='Z'){
//					if(cur.sum &(1<<(Maze[nx][ny]-'A')) && v[nx][ny][cur.sum]==0){ //��& ��������㵱ǰ��û�д���Ӧ��Կ��
//						v[nx][ny][cur.sum] = v[cur.x][cur.y][cur.sum] + 1; 
//						struct state temp;
//						temp.x = nx;temp.y = ny;temp.sum = cur.sum;
//						p.push(temp);
//					}
//				}
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int sx,sy,T;
//	scanf("%d%d%d%d%d%d%d",&N,&M,&T,&sx,&sy,&ex,&ey);
//	for(int i=0;i<N;i++)scanf("%s",Maze[i]);
//	for(int i=0;i<T;i++)
//	{
//		scanf("%d%d",&Key[i].x,&Key[i].y);
//		Maze[Key[i].x][Key[i].y]='0'+i;
//	}
//	printf("%d\n",bfs(sx,sy));
//	return 0;
//}
//
////************************�ο��Ĵ���*****************************************
////int main(){
////	
////	cin>>N>>M>>K>>sx>>sy>>ex>>ey;
////
////	for(int i = 0;i < N;i++){
////		cin>>Maze[i];
////	}
////	
//////	key.resize(K);
////	for(int i = 0;i < K;i++){
////		cin>>Key[i].x;
////		cin>>Key[i].y;
////		Maze[Key[i].x][Key[i].y] = '0'+i;  //�ڴ��Կ�׵�λ�ü�¼��ŵ��ǵڼ���Կ��
////	}
////
////	cout<<bfs(sx,sy)<<endl;
////	return 0;
////}
//
//
////#include<cstdio>
////#include<queue>
////#include<iostream>
////#include<cstring>
////#include<algorithm>
////using namespace std;
////struct lenka
////{
////	int x,y,sum;
////}key[10];
////char s[105][105];
////int v[105][105][1<<6];
////int d[4][2]={-1,0,0,-1,1,0,0,1};
////int n,m,ex,ey;
////int bfs(int nx,int ny)
////{
////	memset(v,0,sizeof v);
////	v[nx][ny][0]=1;
////	queue<struct lenka>p;
////	struct lenka tmp;
////	tmp.x = nx;tmp.y = ny;tmp.sum = 0;
////	p.push(tmp);
////	while(!p.empty())
////	{
////		lenka now=p.front();p.pop();
////		if(now.x==ex&&now.y==ey)return v[now.x][now.y][now.sum]-1;
////		for(int i=0;i<4;i++)
////		{
////			nx=now.x+d[i][0];
////			ny=now.y+d[i][1];
////			if(nx>=0&&nx<n&&ny>=0&&ny<m&&s[nx][ny]!='#')
////			{
////				if(s[nx][ny]=='.'&&v[nx][ny][now.sum]==0)
////				{
////					v[nx][ny][now.sum]=v[now.x][now.y][now.sum]+1;
////				/*	p.push((lenka){nx,ny,now.sum});*/
////					struct lenka tmp;
////					tmp.x = nx;tmp.y = ny;tmp.sum = now.sum;
////					p.push(tmp);
////				}
////				else if('0'<=s[nx][ny]&&s[nx][ny]<='5')
////				{
////					int sum=now.sum|(1<<(s[nx][ny]-'0'));
////					if(v[nx][ny][sum])continue;
////					v[nx][ny][sum]=v[now.x][now.y][now.sum]+1;
////				//	p.push((lenka){nx,ny,sum});
////					struct lenka tmp;
////					tmp.x = nx;tmp.y = ny;tmp.sum = sum;
////					p.push(tmp);
////				}
////				else if(s[nx][ny]>='A'&&s[nx][ny]<='Z')
////				{
////					if(now.sum&(1<<(s[nx][ny]-'A'))&&v[nx][ny][now.sum]==0)
////					{
////						v[nx][ny][now.sum]=v[now.x][now.y][now.sum]+1;
////						//p.push((lenka){nx,ny,now.sum});
////						struct lenka tmp;
////						tmp.x = nx;tmp.y = ny;tmp.sum = now.sum;
////						p.push(tmp);
////					}
////				}
////			}
////		}
////	}
////	return -1;
////}
////int main()
////{
////	int sx,sy,T;
////	scanf("%d%d%d%d%d%d%d",&n,&m,&T,&sx,&sy,&ex,&ey);
////	for(int i=0;i<n;i++)scanf("%s",s[i]);
////	for(int i=0;i<T;i++)
////	{
////		scanf("%d%d",&key[i].x,&key[i].y);
////		s[key[i].x][key[i].y]='0'+i;
////	}
////	printf("%d\n",bfs(sx,sy));
////	return 0;
////}