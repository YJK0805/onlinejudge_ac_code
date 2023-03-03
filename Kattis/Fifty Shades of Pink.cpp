// Problem: Fifty Shades of Pink
// Contest: Kattis
// URL: https://open.kattis.com/problems/fiftyshades
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	long long ans=0;
	for(int i=0;i<n;i++){
		long long f=0;
		string sc="";
		for(int j=0;j<s[i].size();j++){
			if(s[i][j]>='A'&&s[i][j]<='Z'){
				s[i][j]=s[i][j]-'A'+'a';
			}
			if(s[i][j]=='r'){
				f=1;
				sc="r";
			}else if(s[i][j]=='p'){
				f=2;
				sc="p";
			}else if(f){
				sc+=s[i][j];
				if(sc=="pink"||sc=="rose"){
					ans++;
					break;
				}
			}
		}
	}
	if(ans){
		cout<<ans<<"\n";
	}else{
		cout<<"I must watch Star Wars with my daughter\n";
	}
	return 0;
}
