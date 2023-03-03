#include <iostream>
using namespace std;
int gcd(int x,int y)
{
    if(x%y==0)
    	return y;
    else
    	return gcd(y,x%y);
}
	int main(){
	int t;
	cin>>t;
	int x[t],y[t],r[t],i;
	for(i=0;i<t;i++){
		cin>>x[i]>>y[i];
		r[i]=gcd(x[i],y[i]);
	}
	for(i=0;i<t;i++){
		cout<<r[i]<<"\n";
	}
	return 0;
}
