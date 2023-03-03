#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a,m,b;
	cin>>a>>m>>b;
	while(m--){
		long long n;
		char c;
		cin>>n>>c;
		if(c=='+'){
			a+=n;
		}else if(c=='-'){
			a-=n;
		}else if(c=='/'){
			a/=n;
		}else{
			a*=n;
		}
		a%=b;
	}
	cout<<a%b<<"\n";
	return 0;
}
