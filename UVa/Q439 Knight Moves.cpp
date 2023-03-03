#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x,y,dis;
};
int dx[8]={-1,-1,1,1,2,2,-2,-2},dy[8]={2,-2,2,-2,1,-1,1,-1};
node q[2000000];
bool used[128][128];
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
			break;
		}else{
			for(int k=0;k<8;k++){
				nxt=cur;
				nxt.x+=dx[k];
				nxt.y+=dy[k];
				nxt.dis++;
				if(nxt.x>='a'&&nxt.x<='h'&&nxt.y>='1'&&nxt.y<='8'){
					if(!used[nxt.x][nxt.y]){
						used[nxt.x][nxt.y]=true;
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
	string s,e;
	while(cin>>s>>e){
		cout<<"To get from "<<s<<" to "<<e<<" takes "<<bfs(s[0],s[1],e[0],e[1])<<" knight moves.\n";
	}
	return 0;
}

