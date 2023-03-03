#include <bits/stdc++.h>
using namespace std;
long long a[1000000+10];
int main(){
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	long long t;
	cin>>t;
	while(t--){
		long long k;
		cin>>k;
		long long x1=lower_bound(a,a+n,k)-a,x2=upper_bound(a,a+n,k)-a;
		if(a[x1]==k){
			cout<<k<<"\n";
		}else{
			if(x1-1>=0){
				cout<<a[x1-1]<<" ";
			}else{
				cout<<"no ";
			}
			if(x2!=n){
				cout<<a[x2]<<"\n";
			}else{
				cout<<"no\n";
			}
		}
	}
	return 0;
}
