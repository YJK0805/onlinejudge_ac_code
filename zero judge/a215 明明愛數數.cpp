#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,i;
    while(cin>>a>>b){
    long long ans=0,sum=0;
    i=0;
    while(sum<=b){
        sum=sum+a+i;
        i++;
    }
    if(i==0) {
        i++;
    }
    cout<<i<<endl;
    }
	return 0;
}
