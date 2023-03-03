#include <bits/stdc++.h>
using namespace std;
int a[105][105],c[105][105],dp[105],n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			c[i][j]=c[i][j-1]+a[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		int cur=0;
		for(int j=i;j<=n;j++){
			dp[0]=max(0,c[0][j]-c[0][i-1]);
			for(int k=1;k<=n;k++){
				int sum=c[k][j]-c[k][i-1];
				dp[k]=max(sum,dp[k-1]+sum);
				cur=max(cur,dp[k]);
			}
			ans=max(ans,cur);
		}
	}
	cout<<ans<<"\n";
	return 0;
}
