#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    if(a<=5){
        cout<<"0"<<endl;
    }else if(a>=6&&a<=11){
        cout<<590<<endl;
    }else if(a>=12&&a<=17){
        cout<<790<<endl;
    }else if(a>=18&&a<=59){
        cout<<890<<endl;
    }else if(a>=60){
        cout<<399<<endl;
    }
	return 0;
}
