// Problem: Free Food
// Contest: Kattis
// URL: https://open.kattis.com/problems/freefood
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<pair<long long,long long>> st(n);
	for(int i=0;i<n;i++){
		cin>>st[i].first>>st[i].second;
	}
	sort(st.begin(),st.end());
	long long ans=0,s=st[0].first,e=st[0].second;
	for(int i=1;i<n;i++){
		if(st[i].first>=s&&st[i].first<=e){
			e=max(st[i].second,e);
		}else{
			ans+=(e-s+1);
			s=st[i].first;
			e=st[i].second;
		}
	}
	ans+=(e-s+1);
	cout<<ans<<"\n";
	return 0;
}
