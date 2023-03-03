#include <bits/stdc++.h>
using namespace std;
int n,m,l,r,a[100010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m){
		a[0]=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			a[i]+=a[i-1];
		}
		for(int i=0;i<m;i++){
			cin>>l>>r;
			cout<<a[r]-a[l-1]<<"\n";
		}
	}
	return 0;
}
