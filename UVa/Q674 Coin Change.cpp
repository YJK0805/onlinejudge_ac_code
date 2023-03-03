#include <bits/stdc++.h>
using namespace std;
int n,dp[7500],c[5]={1,5,10,25,50};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[0]=1;
	for(int i=0;i<5;i++){
		for(int j=0;j<7490;j++){
			if(j-c[i]>=0){
				dp[j]+=dp[j-c[i]];
			}
		}
	}
	while(cin>>n){
		cout<<dp[n]<<"\n";
	}
	return 0;
}
