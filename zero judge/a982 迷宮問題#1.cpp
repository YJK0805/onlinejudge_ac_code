#include <bits/stdc++.h>
using namespace std;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},n;
char m[110][110];
struct node{
	int x,y,dis;
};
node q[100100];
bool check[110][110];
int bfs(int sx,int sy){
	memset(check,false,sizeof(check));
	node cur,nxt;
	q[0].x=sx;
	q[0].y=sy;
	q[0].dis=1;
	check[sx][sy]=true;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(cur.x==n-1&&cur.y==n-1){
			return cur.dis;
			break;
		}else{
			for(int k=0;k<4;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>=1&&nxt.y>=1&&nxt.x<=n&&nxt.y<=n&&m[nxt.x][nxt.y]=='.'){
					if(!check[nxt.x][nxt.y]){
						check[nxt.x][nxt.y]=true;
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
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>m[i][j];
		}
	}
	int ans=bfs(2,2);
	if(ans==-1){
		cout<<"No solution!\n";
	}else{
		cout<<ans<<"\n";
	}
	return 0;
}
