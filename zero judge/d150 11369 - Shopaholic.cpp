#include<bits/stdc++.h>
using namespace std;
int p[20100];
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		sort(p,p+n);
		long long ans=0;
		for(int i=n-3;i>=0;i-=3){
			ans+=p[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}

