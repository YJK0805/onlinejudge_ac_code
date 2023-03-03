#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x,y,dis;
};
char board[1024][1024];
int n,m;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool used[1024][1024];
node q[2000000];
int bfs(int sx,int sy,int ex,int ey){
	int i,j,k;
	node cur,nxt;
	memset(used,false,sizeof(used));
	q[0].x=sx;
	q[0].y=sy;
	q[0].dis=0;
	used[sx][sy]=true;
	for(i=0,j=1;i<j;i++){
		cur=q[i];
		if(cur.x==ex&&cur.y==ey){
			return cur.dis;
		}else{
			for(k=0;k<4;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>=1&&nxt.x<=n&&nxt.y>=1&&nxt.y<=m){
					if(board[nxt.x][nxt.y]!='*'&&!used[nxt.x][nxt.y]){
						used[nxt.x][nxt.y]=true;
						q[j]=nxt;
						j++;
					}
				}
			}
		}
	}
	return -1;
}
int main(){
	cin>>n>>m;
	int sx,sy,ex,ey,f;
	cin>>sx>>sy>>ex>>ey;
	cin>>f;
	while(f--){
		int x,y;
		cin>>x>>y;
		board[x][y]='*';
	}
	if(bfs(sx,sy,ex,ey)==-1){
		cout<<"Harakiri!\n";
	}else{
		cout<<"Cool!\n";
	}
	return 0;
}

