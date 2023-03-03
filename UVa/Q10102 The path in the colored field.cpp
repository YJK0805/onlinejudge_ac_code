#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,dis;
};
char board[110][110];
bool used[110][110];
node q[2000000];
int m,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int bfs(int sy,int sx){
	node cur,nxt;
	memset(used,false,sizeof(used));
	q[0].y=sy;
	q[0].x=sx;
	q[0].dis=0;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(board[cur.y][cur.x]=='3'){
			return cur.dis;
			break;
		}else{
			for(int k=0;k<4;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>=0&&nxt.x<m&&nxt.y>=0&&nxt.y<m){
					if(!used[nxt.y][nxt.x]){
						used[nxt.y][nxt.x]=true;
						q[j]=nxt;
						j++;
					}
				}
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>m){
		vector <int> v;
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				cin>>board[i][j];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(board[i][j]=='1'){
					v.push_back(bfs(i,j));
				}
			}
		}
		sort(v.begin(),v.end());
		cout<<v[v.size()-1]<<"\n";
	}
	return 0;
}

