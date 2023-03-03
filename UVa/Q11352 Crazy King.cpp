#include <bits/stdc++.h>
using namespace std;
int n,m,sx,sy,ex,ey,dx[8]={1,1,0,-1,-1,-1,0,1},dy[8]={0,1,1,1,0,-1,-1,-1};
char board[150][150];
struct node{
	int x,y,dis;
};
bool used[150][150];
node q[2000000];
int hx[8]={1,2,2,1,-1,-2,-2,-1},hy[8]={-2,-1,1,2,2,1,-1,-2};
bool horse(int x,int y){
	int xx=x,yy=y;
	if(board[xx][yy]=='Z'){
		return false;
	}
	for(int i=0;i<8;i++){
		xx+=hx[i];
		yy+=hy[i];
		if(board[xx][yy]=='Z'){
			return false;
		}
		xx=x,yy=y;
	}
	return true;
}
int bfs(int sx,int sy,int ex,int ey){
	node cur,nxt;
	memset(used,false,sizeof(used));
	q[0].x=sx;
	q[0].y=sy;
	q[0].dis=0;
	used[sx][sy]=true;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(cur.x==ex&&cur.y==ey){
			return cur.dis;
		}else{
			for(int k=0;k<8;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>=0&&nxt.x<n&&nxt.y>=0&&nxt.y<m){
					if(nxt.x==ex&&nxt.y==ey){
						return nxt.dis;
					}
					if(!used[nxt.x][nxt.y]&&horse(nxt.x,nxt.y)){
						q[j]=nxt;
						j++;
						used[nxt.x][nxt.y]=true;
					}
				}
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(board,' ',sizeof(board));
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>board[i][j];
				if(board[i][j]=='A'){
					sx=i;
					sy=j;
				}
				if(board[i][j]=='B'){
					ex=i;
					ey=j;
				}
			}
		}
		long long ans=bfs(sx,sy,ex,ey);
		if(ans!=-1){
			cout<<"Minimal possible length of a trip is "<<ans<<"\n";
		}else{
			cout<<"King Peter, you can't go now!\n";
		}
	}
	return 0;
}
