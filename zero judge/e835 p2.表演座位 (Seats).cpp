#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n<=2500){
        cout<<1<<" ";
        if(n%25==0){
            cout<<n/25<<" "<<25<<endl;
        }else{
            cout<<(n/25)+1<<" "<<n%25<<endl;
        }
    }else if(n>2500&&n<=7500){
        n=n-2500;
        cout<<2<<" ";
        if(n%50==0){
            cout<<n/50<<" "<<50<<endl;
        }else{
            cout<<(n/50)+1<<" "<<n%50<<endl;
        }
    }else if(n>7500&&n<=10000){
        n=n-7500;
        cout<<3<<" ";
        if(n%25==0){
            cout<<n/25<<" "<<25<<endl;
        }else{
            cout<<(n/25)+1<<" "<<n%25<<endl;
        }
    }
	return 0;
}
