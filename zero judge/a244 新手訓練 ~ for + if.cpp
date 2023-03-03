#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i,n,a,b,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==1){
            cout<<b+c<<endl;
        }else if(a==2){
            cout<<b-c<<endl;
        }else if(a==3){
            cout<<b*c<<endl;
        }else if(a==4){
            cout<<b/c<<endl;
        }
    }
	return 0;
}
