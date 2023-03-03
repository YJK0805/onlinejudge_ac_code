#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,ans=1;
	for(int i=0;i<3;i++){
		cin>>n;
		ans*=n;
	}
	cout<<ans<<"\n";
	return 0;
}
