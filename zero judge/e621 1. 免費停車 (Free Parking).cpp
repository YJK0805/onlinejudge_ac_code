#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,d=1,e=1,a,b,c;
    cin>>n;
    long long r[n+1][501],f[501]={0};
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        for(int j=a+1;j<b;j++){
            if(j%c!=0){
            r[d][e]=j;
            e++;
            f[d]++;
            }
        }
        d++;
        e=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=f[i];j++){
            cout<<r[i][j]<<" ";
        }
        if(f[i]==0){
            cout<<"No free parking spaces.";
        }
        cout<<endl;
    }
	return 0;
}
