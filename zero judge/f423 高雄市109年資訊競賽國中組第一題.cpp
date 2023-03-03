#include <bits/stdc++.h>
using namespace std;
int n;
long long ans=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i+=2){
		ans+=i;
	}
	cout<<ans<<"\n";
	return 0;
}
