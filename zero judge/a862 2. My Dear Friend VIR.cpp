#include <bits/stdc++.h>
using namespace std;
double v,r;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>v>>r){
		double i=v/r;
		cout<<fixed<<setprecision(4)<<i*1000<<"\n";
	}
	return 0;
}
