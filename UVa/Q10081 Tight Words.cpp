#include<bits/stdc++.h>
using namespace std;
double dp[110][12]={0};
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k,n;
	while(cin>>k>>n){
		for(int i=0;i<=k;i++){
			dp[1][i]=1;
		}
		for(int i=2;i<=n;i++){
			for(int j=0;j<=k;j++){
				if(j==0){
					dp[i][j]=dp[i-1][j]+dp[i-1][j+1];
				}else if(j==k){
					dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
				}else{
					dp[i][j]=dp[i-1][j]+dp[i-1][j+1]+dp[i-1][j-1];
				}
			}
		}
		double total=0;
		for(int i=0;i<=k;i++){
			total+=dp[n][i];
		}
		double ans=1.0*total/pow(k+1,n);
		cout<<fixed<<setprecision(5)<<ans*100<<"\n";
	}
	return 0;
}
