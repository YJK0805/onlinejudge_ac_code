#include <bits/stdc++.h>
using namespace std;
double p,q,r,s,t,u,eps=1e-9;
double abs2(double x){
	if(x>=0){
		return x;
	}else{
		return -1*x;
	}
}
double ans(double x){
	return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
double binary_search(double l,double r){
	double mid,ret=1;
	while(abs2(ret)>eps){
		mid=(l+r)/2.0;
		ret=ans(mid);
		if(ret<0){
			r=mid;
		}else{
			l=mid;
		}
	}
	return mid;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>p>>q>>r>>s>>t>>u){
		if(ans(1)*ans(0)>0){
			cout<<"No solution\n";
		}else{
			double x=binary_search(0,1+eps);
			cout<<fixed<<setprecision(4)<<x<<"\n";
		}
	}
	return 0;
}
