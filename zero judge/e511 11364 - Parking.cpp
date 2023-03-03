#include <bits/stdc++.h>
using namespace std;
int n,t,x,xmax,xmin;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		xmax=-1;
		xmin=100;
		while(n--){
			cin>>x;
			xmax=max(xmax,x);
			xmin=min(xmin,x);
		}
		cout<<(xmax-xmin)*2<<"\n";
	}
	return 0;
}
