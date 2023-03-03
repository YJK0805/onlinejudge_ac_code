#include <bits/stdc++.h>
using namespace std;
long long ans,n,k;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>k){
		ans=0;
		ans+=n;
		while(n>=k){
			ans+=(n/k);
			n=n/k+n%k;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
