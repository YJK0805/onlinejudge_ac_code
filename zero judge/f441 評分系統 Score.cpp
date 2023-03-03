#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,s;
    cin>>n>>s;
    long long a[n],st[n],t,i,j;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>t;
    for(i=0;i<t;i++){
        long long score=0;
        for(j=0;j<n;j++){
            cin>>st[j];
            if(st[j]==a[j]){
                score+=s;
            }
        }
        cout<<score<<"\n";
    }
	return 0;
}
