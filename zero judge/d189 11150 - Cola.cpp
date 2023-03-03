#include <bits/stdc++.h>
using namespace std;
long long ans,n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		ans=0;
		ans+=n;
		n+=1;
		while(n>=3){
			ans+=(n/3);
			n=n/3+n%3;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
