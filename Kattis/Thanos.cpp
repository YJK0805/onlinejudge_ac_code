#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	long long p,r,f;
	while(n--){
		cin>>p>>r>>f;
		long long count=0;
		while(p<=f){
			count++;
			p*=r;
		}
		cout<<count<<"\n";
	}
	return 0;
}
