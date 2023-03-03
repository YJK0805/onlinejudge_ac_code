#include <bits/stdc++.h>
using namespace std;
long long n,p[500010],m;
void init(){
	for(int i=0;i<=n;i++){
		p[i]=i;
	}
}
long long f(long long x){
	if(x==p[x]){
		return x;
	}
	return p[x]=f(p[x]);
}
void u(long long a,long long b){
	a=f(a),b=f(b);
	p[b]=p[a];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		init();
		long long x,y;
		while(m--){
			cin>>x>>y;
			u(x,y);
		}
		for(int i=1;i<=n;i++){
			cout<<f(i)<<"\n";
		}
	}
	return 0;
}
