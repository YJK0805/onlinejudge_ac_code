#include <bits/stdc++.h>
using namespace std;
long long n,k,a,mi,ma;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	ma=0;
	for(int i=0;i<n;i++){
		mi=1000000;
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>a;
			mi=min(mi,a);
		}
		ma=max(ma,mi);
	}
	cout<<ma<<"\n";
	return 0;
}
