#include <iostream>
using namespace std;
int main(){
    int d,e,i,a[4],b[6],c[6],money=0,f=0;
    for(i=1;i<=3;i++){
    cin>>a[i];
    }
    for(i=1;i<=5;i++){
    cin>>b[i];
    }
    for(i=1;i<=5;i++){
    cin>>c[i];
    }
    for(e=1;e<=5;e++){
        for(d=1;d<=3;d++){
            if(b[e]==a[d]){
                    if(d==3){
                        money=money-c[e];
                        f=1;
                    }else{
                    money=money+c[e];
                    }
        }
    }
    }
    if(f==0){
    money=money*2;
    }
    if(money<0){
        money=0;
    }
    cout<<money<<endl;
	return 0;
}
