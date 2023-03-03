#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<pair<long long,long long>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first;
		v[i].second=i;
	}
	sort(v.begin(),v.end());
	cout<<v[0].second<<"\n";
	return 0;
}
