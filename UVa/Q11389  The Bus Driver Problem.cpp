#include<bits/stdc++.h>
using namespace std;
long long a[10100],b[10100];
int main() {
	int n,d,r;
	while(cin>>n>>d>>r&&n&&d&&r){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		long long ans=0;
		for(int i=0,j=n-1;i<n;i++,j--){
			if(a[i]+b[j]-d>=0){
				ans+=(a[i]+b[j]-d);
			}
		}
		ans*=r;
		cout<<ans<<"\n";
	}
	return 0;
}

