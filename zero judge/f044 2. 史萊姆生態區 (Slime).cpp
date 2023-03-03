#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x=0,d=0,n,t;
	cin>>n>>t;
	while(x<t){
		x+=n;
		n*=2;
		d++;
	}
	cout<<d;
	return 0;
}
