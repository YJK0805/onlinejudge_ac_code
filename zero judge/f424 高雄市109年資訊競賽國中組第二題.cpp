#include <bits/stdc++.h>
using namespace std;
int dp[100],n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[0]=1;
	dp[1]=3;
	cin>>n;
	for(int i=2;i<n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cout<<dp[n-1]<<"\n";
	return 0;
}
