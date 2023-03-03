#include <bits/stdc++.h>
using namespace std;
long long spow(long long a,long long b,long long c){
	if(b==0){
		return 1;
	}else if(b%2==0){
		return spow(a,b/2,c)%c*spow(a,b/2,c)%c;
	}else{
		return a%c*spow(a,b-1,c)%c;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long a,b,c;
	cin>>a>>b>>c;
	cout<<spow(a,b,c)<<"\n";
	return 0;
}
