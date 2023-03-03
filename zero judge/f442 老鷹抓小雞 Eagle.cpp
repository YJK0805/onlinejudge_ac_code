#include<bits/stdc++.h>
using namespace std;
int main() {
    long long e,q,n,j,i;
    cin>>n;
    long long c[n];
    for(i=0;i<n;i++){
        cin>>c[i];
    }
    cin>>e>>q;
    long long cc[q];
    for(i=0;i<q;i++){
        cin>>cc[i];
        for(j=0;j<n;j++){
            if(cc[i]==c[j]){
                c[j]=e;
                swap(cc[i],e);
                break;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
	return 0;
}
