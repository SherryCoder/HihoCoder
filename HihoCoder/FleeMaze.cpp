//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
////这题是常见的广度优先搜索，广度优先搜索中最经典的就是寻找最小路径。
////给定了一个节点node后，一次遍历它的上下左右节点，并将满足条件的节点选入队列（先进先出）
////而后，再从队列的头部取出一个满足条件的节点，遍历它的上下左右节点，依次循环下去，直到队列中元素为空
////这一题用v[x][y][sum]表示在迷宫(x,y)位置处，携带了sum把钥匙，其中，sum的数值是通过位运算来计算的。因为本题最多只有5把钥匙
////所以可以用0位的状态代表是否携带有A的钥匙，1位的状态表示是否携带有B的钥匙，以此类推。
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
//					int sum = cur.sum | (1<<(Maze[nx][ny]-'0')); //通过或操作，来赋值现在身上所带的是N把钥匙中的第几把
//					if(v[nx][ny][sum]) continue;
//					v[nx][ny][sum] = v[cur.x][cur.y][cur.sum] + 1;
//					struct state temp;
//					temp.x = nx;temp.y = ny;temp.sum = sum;
//					p.push(temp);
//				}
//				else if(Maze[nx][ny] >='A' && Maze[nx][ny]<='Z'){
//					if(cur.sum &(1<<(Maze[nx][ny]-'A')) && v[nx][ny][cur.sum]==0){ //用& 运算符计算当前有没有带相应的钥匙
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
////************************参考的代码*****************************************
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
////		Maze[Key[i].x][Key[i].y] = '0'+i;  //在存放钥匙的位置记录存放的是第几把钥匙
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