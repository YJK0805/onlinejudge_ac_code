#include <bits/stdc++.h>
using namespace std;
long long fpow(long long a,long long b,long long c){
	if(b==0){
		return 1;
	}else if(b%2==0){
		return fpow(a,b/2,c)%c*fpow(a,b/2,c)%c;
	}else{
		return fpow(a,b-1,c)%c*a%c;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long x,y,p;
	cin>>x>>y>>p;
	long long ans=fpow(x,y,p);
	cout<<ans<<"\n";
	return 0;
}
