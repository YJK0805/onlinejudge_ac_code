#include <iostream>
using namespace std;
int main(){
	int p,q,a;
	cin>>p>>q;
	a=-1*(p-q);
	if(a%2 != 0){
		a -=1;
	}
	a /=2;
	p +=a;
	cout<<p<<"\n";
	return 0;
}
