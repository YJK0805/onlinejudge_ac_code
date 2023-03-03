#include <iostream>
using namespace std;
int main(){
    int i,t;
    for(i=2;i%71!=0;i=i*2+1);
    if(i%3==0){
        cout<<"right\n";
    }else{
        cout<<"left\n";
    }
    return 0;
}
