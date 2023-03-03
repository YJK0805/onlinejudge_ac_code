#include <bits/stdc++.h>
using namespace std;
long long dp[110][110],w,h,n;
bool check[110][110]; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>w>>h&&w&&h){
		cin>>n;
		memset(check,true,sizeof(check));
		for(int i=0;i<=100;i++){
			for(int j=0;j<=100;j++){
				dp[i][j]=0;
			}
		}
		for(int i=0,x,y;i<n;i++){
			cin>>x>>y;
			dp[x][y]=0;
			check[x][y]=false;
		}
		for(int i=0;i<=h;i++){
			if(check[0][i]){
				dp[0][i]=1;
			}else{
				break;
			}
		}
		for(int i=0;i<=w;i++){
			if(check[i][0]){
				dp[i][0]=1;
			}else{
				break;
			}
		}
		for(int i=1;i<=w;i++){
			for(int j=1;j<=h;j++){
				if(check[i][j]){
					dp[i][j]=dp[i-1][j]+dp[i][j-1];
				}
			}
		}
		if(dp[w][h]==0){
			cout<<"There is no path.\n";
		}else if(dp[w][h]==1){
			cout<<"There is one path from Little Red Riding Hood's house to her grandmother's house.\n";
		}else{
			cout<<"There are "<<dp[w][h]<<" paths from Little Red Riding Hood's house to her grandmother's house.\n";
		}
	}
	return 0;
}
