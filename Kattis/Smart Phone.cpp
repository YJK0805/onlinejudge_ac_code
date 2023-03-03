// Problem: Smart Phone
// Contest: Kattis
// URL: https://open.kattis.com/problems/smartphone
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--){
		string type,s[4];
		cin>>type;
		for(int i=0;i<4;i++){
			cin>>s[i];
		}
		long long j,ans=30,count;
		for(int i=0;i<4;i++){
			for(j=0;j<s[i].size();j++){
				if(type[j]!=s[i][j]){
					break;
				}
			}
			if(i){
				count=s[i].size()-j+type.size()-j+1;
			}else{
				count=s[i].size()-j+type.size()-j;
			}
			ans=min(ans,count);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
