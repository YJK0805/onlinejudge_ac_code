#include <iostream>
using namespace std;
int gcd(int x,int y)
{
    if(x%y==0)
    	return y;
    else
    	return gcd(y,x%y);
}
	int main()
{
	int x,y,result;
	while(cin>>x>>y){
	result=gcd(x,y);
	cout<<result<<endl;}
	return 0;
}
