#include <bits/stdc++.h>
using namespace std;
long long a[1000000];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	reverse(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
