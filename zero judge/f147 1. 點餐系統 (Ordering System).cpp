#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,d[3][10],sum=0;
    string s[3][10];
    s[1][1]="Medium Wac 4";
    s[1][2]="WChicken Nugget 8";
    s[1][3]="Geez Burger 7";
    s[1][4]="ButtMilk Crispy Chicken 6";
    s[1][5]="Plastic Toy 3";
    s[2][1]="German Fries 2";
    s[2][2]="Durian Slices 3";
    s[2][3]="WcFurry 5";
    s[2][4]="Chocolate Sunday 7";
    d[1][1]=4;
    d[1][2]=8;
    d[1][3]=7;
    d[1][4]=6;
    d[1][5]=3;
    d[2][1]=2;
    d[2][2]=3;
    d[2][3]=5;
    d[2][4]=7;
    while(cin>>a){
        if(a==1||a==2){
            cin>>b;
            cout<<s[a][b]<<endl;
            sum=sum+d[a][b];
        }
        if(a==0){
            cout<<"Total: "<<sum<<endl;
            return 0;
        }
    }
	return 0;
}
