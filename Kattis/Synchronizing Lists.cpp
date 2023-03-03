#include <bits/stdc++.h>
using namespace std;
int n,a[5010],b[5010],c[5010],d[20010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n&&n){
		for(int i=0;i<n;i++){
			cin>>a[i];
			c[i]=a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b,b+n);
		sort(c,c+n);
		for(int i=0;i<n;i++){
			d[c[i]+10000]=i;
		}
		for(int i=0;i<n;i++){
			cout<<b[d[a[i]+10000]]<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}
