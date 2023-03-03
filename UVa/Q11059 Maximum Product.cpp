#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t=1;
	while(cin>>n){
		long long a[n],max=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			long long x=1;
			for(int j=i;j<n;j++){
				x*=a[j];
				if(max<x){
					max=x;
				}
			}
		}
		cout<<"Case #"<<t<<": The maximum product is "<<max<<".\n\n";
		t++;
	}
	return 0;
}

