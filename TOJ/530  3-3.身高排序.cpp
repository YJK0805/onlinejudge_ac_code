#include <iostream>
using namespace std;
int main(){
	int p,q,t;
	cin>>p>>q;
	if(p>q){
		t=p;
		p=q;
		q=t;
	}
	cout<<p<<" "<<q<<"\n";
	return 0;
}
