#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    long long a=0;
    while(cin>>n){
        for(int i=0;i<n.length();i++){
            a=a+n[i];
        }
        if(a%3==0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        cout<<a;
        a=0;
    }
	return 0;
}
