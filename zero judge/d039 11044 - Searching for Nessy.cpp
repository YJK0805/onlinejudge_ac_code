#include <bits/stdc++.h>
using namespace std;
long long t,n,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		n/=3;
		m/=3;
		cout<<n*m<<"\n";
	}
	return 0;
}
