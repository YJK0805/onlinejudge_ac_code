// Problem: Poker Hand
// Contest: Kattis
// URL: https://open.kattis.com/problems/pokerhand
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<char> c;
	string s;
	for(int i=0;i<5;i++){
		cin>>s;
		c.emplace_back(s[0]);
	}
	sort(c.begin(),c.end());
	long long ans=1,count=1;
	for(int i=1;i<c.size();i++){
		if(c[i]==c[i-1]){
			count++;
		}else{
			ans=max(count,ans);
			count=1;
		}
	}
	ans=max(count,ans);
	cout<<ans<<"\n";
	return 0;
}
