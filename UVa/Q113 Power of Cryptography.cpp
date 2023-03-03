#include<bits/stdc++.h>
using namespace std;
int main() {
	const double EPS=1e-7;
	double ans,n,p;
	while(cin>>n>>p){
		p+=EPS;
		ans=pow(p,1.0/n);
		cout<<(long long)round(ans)<<"\n";
	}	
	return 0;
}
