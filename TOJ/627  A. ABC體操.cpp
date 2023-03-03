#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a,b,n,q;
	cin>>n;
	vector<long long> l(n);
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	cin>>q;
	while(q--){
		cin>>a>>b;
		cout<<l[(a+b)/2-1]<<"\n";
	}
	return 0;
}
