#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x1,x2;
    cin>>n;
    x1=n-(n/1000*100);
    x2=n-(n/2000*200);
    if(x1>x2){
        cout<<x2<<" "<<0<<"\n";
    }else if(x2>x1){
        cout<<x1<<" "<<1<<"\n";
    }else{
        cout<<x2<<" "<<0<<"\n";
    }
	return 0;
}
