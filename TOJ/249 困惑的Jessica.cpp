#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	long long ans=v[0];
	for(int i=1;i<n;i++){
		v[i]=max(v[i],v[i-1]+v[i]);
		ans=max(ans,v[i]);
	}
	cout<<ans<<"\n";
	return 0;
}
