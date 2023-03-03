#include<bits/stdc++.h>
using namespace std;
int main() {
    const double EPS=1e-7;
    long long f,i,j,n,a,b,c;
    cin>>n;
    double s;
    long long smoney[n]={0};
    for(i=0;i<n;i++){
    	cin>>f;
    	for(j=0;j<f;j++){
    		s=0;
    		cin>>a>>b>>c;
			s=s+a*1.0/b*c*b;
			smoney[i]+=(int)(s+EPS);
		}
	}
	for(i=0;i<n;i++){
		cout<<smoney[i]<<"\n";
	}
    return 0;
}
