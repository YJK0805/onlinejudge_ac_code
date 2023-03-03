#include <bits/stdc++.h>
using namespace std;
struct node{
	int x,y,dis;
};
int n,m,sx,sy,ex,ey;
int board[1010][1010],dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};;
node q[2000000];
bool used[1010][1010];
int bfs(int sy,int sx,int ey,int ex){
	node cur,nxt;
	memset(used,false,sizeof(used));
	q[0].y=sy;
	q[0].x=sx;
	q[0].dis=0;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(cur.x==ex&&cur.y==ey){
			return cur.dis;
		}else{
			for(int k=0;k<4;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>=0&&nxt.x<m&&nxt.y>=0&&nxt.y<n&&board[nxt.y][nxt.x]==0){
					if(!used[nxt.y][nxt.x]){
						used[nxt.y][nxt.x]=true;
						q[j]=nxt;
						j++;
					}
				}
			}
		}
	}
	return -1;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>board[i][j];
		}
	}
	cin>>sy>>sx>>ey>>ex;
	cout<<bfs(sy,sx,ey,ex)<<"\n";
}

