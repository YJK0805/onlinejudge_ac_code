#include <bits/stdc++.h>
using namespace std;
int n,p;
long long a[100100],dp[100100];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>p;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]-=p; 
	}
	dp[0]=a[0];
	long long ans=dp[0];
	for(int i=0;i<n;i++){
		dp[i]=max((dp[i-1]+a[i]),a[i]);
		ans=max(ans,dp[i]);
	}
	cout<<ans<<"\n";
	return 0;
}
