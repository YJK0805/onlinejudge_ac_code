#include <bits/stdc++.h>
using namespace std;
int n,a[1000010],dp[1000010][2];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>a[i];
			dp[i][0]=dp[i][1]=0;
		}
		dp[0][0]=0;
		dp[0][1]=a[0];
		for(int i=1;i<n;i++){
			dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
			dp[i][1]=max(dp[i-1][1],dp[i-1][0]+a[i]);
		}
		cout<<max(dp[n-1][0],dp[n-1][1])<<"\n";
	}
	return 0;
}
