// Problem: Quick Estimates
// Contest: Kattis
// URL: https://open.kattis.com/problems/quickestimate
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector <long long> ans(n);
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		ans[i]=s.size();
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<"\n";
	}
	return 0;
}
