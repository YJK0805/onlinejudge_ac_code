#include <bits/stdc++.h>
using namespace std;
long long n,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		ans=n/3+(n%3!=0);
		cout<<ans<<"\n";
	}
	return 0;
}
