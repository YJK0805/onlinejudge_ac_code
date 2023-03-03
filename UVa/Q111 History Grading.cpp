#include <bits/stdc++.h>
using namespace std;
int n,t,a[25],b[25],dp[25][25];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		a[t-1]=i;
	}
	while(cin>>t){
		b[t-1]=1;
		for(int i=2;i<=n;i++){
			cin>>t;
			b[t-1]=i;
		}
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<dp[n][n]<<"\n";
	}
	return 0;
}
