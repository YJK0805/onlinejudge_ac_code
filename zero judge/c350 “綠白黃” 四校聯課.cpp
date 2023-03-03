#include <bits/stdc++.h>
using namespace std;
int n,k,w,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>k>>w;
	ans=n;
	while(n>=k){
		ans+=(n/k*w);
		n=n%k+n/k*w;
	}
	cout<<ans<<"\n";
	return 0;
}
