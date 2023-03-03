#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	while(cin>>n&&n){
		long long a=sqrt(n);
		if(a*a==n){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
	}
	return 0;
}
