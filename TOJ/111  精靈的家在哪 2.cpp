#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n=1,x,y,f=0;
	cin>>x>>y;
	while(n%x!=0){
		if(f==0){
			n++;
			f=1;
		}else{
			n*=2;
			f=0;
		}
	}
	if(n%y==0){
		cout<<"right\n";
	}else{
		cout<<"left\n";
	}
	return 0;
}
