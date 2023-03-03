#include <bits/stdc++.h>
using namespace std;
int n,m,ans,sx,sy;
struct node{
	int x,y,dis;
};
node q[2000000];
char ma[1010][1010];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
bool used[1010][1010];
int bfs(int sx,int sy){
	memset(used,false,sizeof(used));
	node cur,nxt;
	q[0].x=sx;
	q[0].y=sy;
	q[0].dis=0;
	used[sx][sy]=true;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(ma[cur.x][cur.y]=='E'){
			return cur.dis;
			break;
		}else{
			for(int k=0;k<4;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>=1&&nxt.x<=n&&nxt.y>=1&&nxt.y<=m){
					if(!used[nxt.x][nxt.y]){
						if(ma[nxt.x][nxt.y]!='T'&&ma[nxt.x][nxt.y]!='#'){
							used[nxt.x][nxt.y]=true;
							q[j]=nxt;
							j++;
						}
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
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>ma[i][j];
			if(ma[i][j]=='V'){
				sx=i,sy=j;
			}
		}
	}
	ans=bfs(sx,sy);
	cout<<ans<<"\n";
	return 0;
}
