#include <bits/stdc++.h>
using namespace std;
double t[3],x[3];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>t[0]>>t[1]>>t[2]>>x[0]>>x[2]){
		double xx=((x[2]-x[0])*1.0/(t[2]-t[0])*1.0);
		x[1]=(t[1]-t[0])*1.0*xx+x[0];
		cout<<fixed<<setprecision(6)<<x[1]<<"\n";
	}
	return 0;
}
