#include <bits/stdc++.h>
using namespace std;
int main(){
    long long m=0,n=0;
    cin>>m;
    while(cin>>n&&n!=0){
        if(n%m==0){
            cout<<n/m<<endl;
        }else{
            cout<<m-(n%m)<<endl;
        }
    }
	return 0;
}
