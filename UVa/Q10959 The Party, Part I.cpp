#include<bits/stdc++.h>
using namespace std;
int t,p,d,q[1050],dis[1050];
bool edge[1050][1050];
void bfs(){
	q[0]=0;
	dis[0]=0;
	int cur;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		for(int nxt=0;nxt<p;nxt++){
			if(edge[cur][nxt]&&dis[nxt]>dis[cur]+1){
				dis[nxt]=dis[cur]+1;
				q[j]=nxt;
				j++;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	int c=0;
	while(t--){
		if(c){
			cout<<"\n";
		}else{
			c++;
		}
		for(int i=0;i<1050;i++){
			dis[i]=1e9+10;
			for(int j=0;j<1050;j++){
				edge[i][j]=false;
			}
		}
		cin>>p>>d;
		int a,b;
		for(int i=0;i<d;i++){
			cin>>a>>b;
			edge[a][b]=edge[b][a]=true;
		}
		bfs();
		for(int i=1;i<p;i++){
			cout<<dis[i]<<"\n";
		}
	}
	return 0;
}

