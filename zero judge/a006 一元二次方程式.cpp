#include <iostream>
#include <cmath>
using namespace std;
int main(){	
    int a,b,c,x,y;
    cin>>a>>b>>c;
    if(b*b-4*a*c==0){
    x=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    cout<<"Two same roots "<<"x="<<x<<endl;}
	else if(b*b-4*a*c>0)
    {x=(-b+(sqrt(b*b-4*a*c)))/2*a;
    y=(-b-(sqrt(b*b-4*a*c)))/2*a;
    cout<<"Two different roots "<<"x1="<<x<<" , "<<"x2="<<y<<endl;}
	else if((b*b-4*a*c)<0)
	{
    cout<<"No real root"<<endl;
}
	return 0;
}
