#include <bits/stdc++.h>
using namespace std;
const double pi=2*acos(0);
int d,l;
double hs,hl;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>d>>l){
		hl=l*1.0/2;
		hs=sqrt((l*1.0/2*l*1.0/2)-(d*1.0/2*d*1.0/2));
		double ans=pi*hs*hl;
		cout<<fixed<<setprecision(3)<<ans<<"\n";
	}
	return 0;
}
