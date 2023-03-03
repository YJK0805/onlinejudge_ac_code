#include <bits/stdc++.h>
using namespace std;
int t,n,a[55],c=1;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		int hj=0,lj=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			if(a[i]>a[i-1]){
				hj++;
			}else if(a[i]<a[i-1]){
				lj++;
			}
		}
		cout<<"Case "<<c<<": "<<hj<<" "<<lj<<"\n";
		c++;
	}
	return 0;
}
