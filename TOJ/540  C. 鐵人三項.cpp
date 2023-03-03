#include <bits/stdc++.h>
using namespace std;
long long a[200050][3],dp[200050][3];
int n; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	dp[0][0]=a[0][0];
	dp[0][1]=dp[0][2]=dp[1][2]=1e+9;
	for(int i=1;i<n;i++){
		dp[i][0]=dp[i-1][0]+a[i][0];
		if(i>=1){
			dp[i][1]=min(dp[i-1][0],dp[i-1][1])+a[i][1];
		}
		if(i>=2){
			dp[i][2]=min(dp[i-1][1],dp[i-1][2])+a[i][2];
		}
	}
	cout<<dp[n-1][2]<<"\n";
	return 0;
}
