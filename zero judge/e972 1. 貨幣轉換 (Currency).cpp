#include <bits/stdc++.h>
using namespace std;
int main(){
    double money1,money2,sum;
    char vc;
    cin>>money1>>money2>>vc;
    if(vc=='T'){
        sum=(money1-money2)*1.00;
        if(sum>=0){
            cout<<vc<<" "<<fixed<<setprecision(2)<<sum<<endl;
        }else{
            cout<<"No Money"<<endl;
        }
    }else if(vc=='U'){
        sum=money1/30.90-money2;
        if(sum>=0&&sum<0.05){
            cout<<vc<<" "<<"0.00"<<endl;
        }else if(sum>0){
            cout<<vc<<" "<<fixed<<setprecision(2)<<sum<<endl;
        }else{
            cout<<"No Money"<<endl;
        }
    }else if(vc=='J'){
        sum=money1/0.28-money2;
        if(sum>=0&&sum<0.05){
            cout<<vc<<" "<<"0.00"<<endl;
        }else if(sum>0){
            cout<<vc<<" "<<fixed<<setprecision(2)<<sum<<endl;
        }else{
            cout<<"No Money"<<endl;
        }
    }else if(vc=='E'){
        sum=money1/34.5-money2;
        if(sum>=0&&sum<0.05){
            cout<<vc<<" "<<"0.00"<<endl;
        }else if(sum>=0){
            cout<<vc<<" "<<fixed<<setprecision(2)<<sum<<endl;
        }else{
            cout<<"No Money"<<endl;
        }
    }
	return 0;
}
