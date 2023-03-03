#include <bits/stdc++.h>
using namespace std;
long long ans=0,a[10050],dp[10050];
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n&&n){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		dp[0]=a[0];
		ans=dp[0];
		for(int i=1;i<n;i++){
			dp[i]=max((dp[i-1]+a[i]),a[i]);
			ans=max(ans,dp[i]);
		}
		if(ans>0){
			cout<<"The maximum winning streak is "<<ans<<".\n";
		}else{
			cout<<"Losing streak.\n";
		}
	}
	return 0;
}
