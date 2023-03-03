#include<bits/stdc++.h>
using namespace std;
long long dp[60][3]={0};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>n;
		dp[1][0]=1;
		dp[1][1]=1;
		for(int j=2;j<=n;j++){
			dp[j][0]=dp[j-1][0]+dp[j-1][1];
			dp[j][1]=dp[j-1][0];
		}
		cout<<"Scenario #"<<i<<":\n"<<dp[n][0]+dp[n][1]<<"\n\n";
	}
	return 0;
}
