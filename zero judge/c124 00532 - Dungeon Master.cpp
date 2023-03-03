#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,z,dis;
};
int l,r,c,sx,sy,sz,ex,ey,ez;
char board[40][40][40];
node q[20000000];
bool used[40][40][40];
int dx[6]={0,1,0,-1,0,0},dy[6]={1,0,-1,0,0,0},dz[6]={0,0,0,0,-1,1};
int bfs(int sz,int sy,int sx,int ez,int ey,int ex){
	node cur,nxt;
	memset(used,false,sizeof(used));
	q[0].z=sz;
	q[0].y=sy;
	q[0].x=sx;
	used[sz][sy][sx]=true;
	q[0].dis=0;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(cur.z==ez&&cur.y==ey&&cur.x==ex){
			return cur.dis;
			break;
		}else{
			for(int k=0;k<6;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.z+=dz[k];
				nxt.dis++;
				if(nxt.y>=0&&nxt.y<r&&nxt.x>=0&&nxt.x<c&&nxt.z>=0&&nxt.z<l&&board[nxt.z][nxt.y][nxt.x]=='.'){
					if(!used[nxt.z][nxt.y][nxt.x]){
						used[nxt.z][nxt.y][nxt.x]=true;
						q[j]=nxt;
						j++;
					}
				}
				if(nxt.z==ez&&nxt.y==ey&&nxt.x==ex){
					return nxt.dis;
				}
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>l>>r>>c&&l&&r&&c){
		for(int i=0;i<l;i++){
			for(int j=0;j<r;j++){
				for(int k=0;k<c;k++){
					cin>>board[i][j][k];
					if(board[i][j][k]=='S'){
						sz=i;
						sx=k;
						sy=j;
					}else if(board[i][j][k]=='E'){
						ez=i;
						ex=k;
						ey=j;
					}
				}
			}
		}
		if(bfs(sz,sy,sx,ez,ey,ex)!=-1){
			cout<<"Escaped in "<<bfs(sz,sy,sx,ez,ey,ex)<<" minute(s).\n";
		}else{
			cout<<"Trapped!\n";
		}
	}
	return 0;
}

