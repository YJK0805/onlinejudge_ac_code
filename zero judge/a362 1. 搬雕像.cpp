#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	while(cin>>n){
		vector<pair<long long,pair<long long,long long>>> ll(n);
		for(int i=0;i<n;i++){
			cin>>ll[i].first>>ll[i].second.first;
			ll[i].second.second=i;
		}
		sort(ll.begin(),ll.end());
		long long ans=0;
		for(int i=0;i<n;i++){
			ans+=abs(i-ll[i].second.second);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
