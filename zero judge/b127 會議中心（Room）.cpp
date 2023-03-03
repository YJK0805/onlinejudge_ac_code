#include <bits/stdc++.h>
using namespace std;
long long n,dp[50];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=45;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	while(cin>>n){
		cout<<dp[n]<<"\n";
	}
	return 0;
}
