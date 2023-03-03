#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	long long m,n;
	while(b--){
		cin>>m>>n;
		a+=(m*n);
	}
	a-=c;
	cout<<a/4<<"\n";
	return 0;
}
