#include <iostream>
using namespace std;
int main(){	
    int a,b,c,d,i=1,t;
    cin>>t;
    while(i<=t){
    cin>>a>>b>>c>>d;
    if((b-a)==(d-c))
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+(b-a)<<endl;
    else
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(b/a)<<endl;
	t--;
	}
	return 0;
}
