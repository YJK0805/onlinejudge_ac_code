#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	long long count=n;
	while(n!=1){
		if(n%2){
			n=3*n+1;
			count+=n;
		}else{
			n/=2;
			count+=n;
		}
	}
	cout<<count<<"\n";
	return 0;
}
