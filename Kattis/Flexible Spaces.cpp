// Problem: Flexible Spaces
// Contest: Kattis
// URL: https://open.kattis.com/problems/flexible
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long w,p;
	cin>>w>>p;
	vector<long long> l(p+2);
	for(int i=1;i<p+1;i++){
		cin>>l[i];
	}
	l[p+1]=w;
	set<long long> ans;
	for(int i=0;i<p+2;i++){
		for(int j=i+1;j<p+2;j++){
			ans.insert(l[j]-l[i]);
		}
	}
	for(auto i:ans){
		cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
