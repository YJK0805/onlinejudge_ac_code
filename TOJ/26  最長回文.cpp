#include <bits/stdc++.h>
using namespace std;
int n,dp[3010][3010];
string s1,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	cin.ignore();
	while(n--){
		getline(cin,s1);
		s2="";
		for(int i=s1.size()-1;i>=0;i--){
			s2+=s1[i];
		}
		for(int i=1;i<=s1.size();i++){
			for(int j=1;j<=s2.size();j++){
				dp[i][j]=0;
				if(s1[i-1]==s2[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<dp[s1.size()][s2.size()]<<"\n";
	}
	return 0;
}
