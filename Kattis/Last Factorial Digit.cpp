#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,a;
	cin>>n;
	while(n--){
		cin>>a;
		long long x=1;
		for(long long i=1;i<=a;i++){
			x*=i;
			x%=10;
		}
		cout<<x<<"\n";
	}
	return 0;
}
