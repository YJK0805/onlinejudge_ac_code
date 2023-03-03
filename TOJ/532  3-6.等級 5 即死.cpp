#include <iostream>
using namespace std;
int main(){
	int p,q,a2=0,a3=0;
	cin>>p>>q;
	if(p%2==0){
		a2++;
	}
	if(p%3==0){
		a3++;
	}
	if(q%2==0){
		a2++;
	}
	if(q%3==0){
		a3++;
	}
	cout<<a2<<" "<<a3<<"\n";
	return 0;
}
