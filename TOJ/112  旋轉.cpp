#include<bits/stdc++.h>
using namespace std;
int main() {
    long long i,n;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	for(i=n-1;i>=0;i--){
    	cout<<a[i]<<"\n";
	}
    return 0;
}
