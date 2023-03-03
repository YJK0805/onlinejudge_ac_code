#include <bits/stdc++.h>
using namespace std;
int main(){
    long long e=0,a,b;
    cin>>a;
    for(int i=0;i<a;i++){
        long long d=0,c=1000000;
        cin>>b;
        e=b;
        while(c!=0){
        for(int t=2;t<sqrt(b);t++){
            if(b%t==0){
                d=1;
                break;
            }
        }
        b=b%c;
        c=c/10;
    }
    if(d==1){
        cout<<e<<" isn't a Prime Day!"<<endl;
    }else{
        cout<<e<<" is a Prime Day!"<<endl;
    }
    }
	return 0;
}
