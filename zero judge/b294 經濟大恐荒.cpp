#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m=0,i,t;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>t;
        m=m+i*t;
    }
    cout<<m<<endl;
	return 0;
}
