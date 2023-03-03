#include<iostream>
using namespace std;
long long gcd(int a,int b){
	while(b){
		int t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main() {
	int x,y;
	cin>>x>>y;
	long long ans=gcd(x,y);
	cout<<ans<<"\n";
	return 0;
}

