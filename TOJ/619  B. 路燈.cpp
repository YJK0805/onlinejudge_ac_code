#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t,n,a;
	cin>>t;
	while(t--){
		cin>>n;
		long long sum=0;
		for(long long i=0;i<n;i++){
			cin>>a;
			sum+=a;
		}
		cout<<sum<<"\n";
	}
	return 0;
}
