#include <bits/stdc++.h>
using namespace std;
long long n,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n&&n){
		n=n*(n+1)*(2*n+1)/6;
		cout<<n<<"\n";
	}
	return 0;
}
