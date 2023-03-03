#include <bits/stdc++.h>
using namespace std;
int main(){
	long long i,a[2],b[2],c[2],n;
	for(i=0;i<2;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	cin>>n;
	long long y1,y2,x1,x2,sum[n+1];
	for(i=0;i<=n;i++){
		x1=i;
		x2=n-i;
		y1=a[0]*x1*x1+b[0]*x1+c[0];
		y2=a[1]*x2*x2+b[1]*x2+c[1];
		sum[i]=y1+y2;
	}
	sort(sum,sum+n+1);
	cout<<sum[n]<<"\n";
	return 0;
}
