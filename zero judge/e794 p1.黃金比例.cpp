#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0,f[51]={0},l,m;
    cin>>n;
    for(int i=2;i<51;i++){
        f[1]=1;
        f[0]=0;
        f[i]=f[i-1]+f[i-2];
    }
    l=f[n];
    m=l+f[n-1];
    cout<<l<<":"<<m<<endl;
	return 0;
}
