#include <bits/stdc++.h>
using namespace std;
long long a[10000010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	long long n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cout<<a[n-2]<<"\n";
	return 0;
}
