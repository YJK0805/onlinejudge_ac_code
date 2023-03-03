#include <bits/stdc++.h>
using namespace std;
long long a[510][510],dp[510][510],n,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m){
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				a[i][j]=0;
				dp[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++){
			dp[1][i]=a[1][i]+dp[1][i-1];
			dp[i][1]=a[i][1]+dp[i-1][1];
		}
		for(int i=2;i<=n;i++){
			for(int j=2;j<=n;j++){
				dp[i][j]=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+a[i][j]);
			}
		}
		int x1,y1,x2,y2;
		for(int i=0;i<m;i++){
			cin>>x1>>y1>>x2>>y2;
			cout<<dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1]<<"\n";
		}
	}
	return 0;
}
