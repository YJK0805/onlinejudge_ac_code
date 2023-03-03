#include <bits/stdc++.h>
using namespace std;
int t,n,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		ans=(n%10);
		n/=10;
		while(n>0){
			ans*=(n%10);
			n/=10;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
