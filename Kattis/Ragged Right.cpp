// Problem: Ragged Right
// Contest: Kattis
// URL: https://open.kattis.com/problems/raggedright
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s[110];
	long long l=0,m=0;
	while(getline(cin,s[l])){
		long long a=s[l].size();
		m=max(m,a);
		l++;
	}
	long long ans=0;
	for(int i=0;i<l-1;i++){
		ans+=((m-s[i].size())*(m-s[i].size()));
	}
	cout<<ans<<"\n";
	return 0;
}
