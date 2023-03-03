#include <bits/stdc++.h>
using namespace std;
long long x[2*100000+10],h[2*100000+10];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>x[i];
    }
    for(long long i=0;i<n;i++){
        cin>>h[i];
    }
    long long count=1,m=x[0]+h[0];
    for(long long i=1;i<n;i++){
        if(m>=x[i]){
            count++;
            m=max((x[i]+h[i]),m);
        }
    }
    cout<<count<<"\n";
    return 0;
}

