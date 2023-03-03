#include <bits/stdc++.h>
using namespace std;
int y,t;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>y;
		cout<<"Case "<<i<<": ";
		if(!(y%4)&&(y%100)||!(y%400)){
			cout<<"a leap year\n";
		}else{
			cout<<"a normal year\n";
		}
	}
	return 0;
}
