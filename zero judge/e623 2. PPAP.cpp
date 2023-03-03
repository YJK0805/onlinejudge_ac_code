#include <bits/stdc++.h>
using namespace std;
int main(){
	long long b=1,n,i=1,x=1;
	cin>>n;
	while(x<n){
		if(b==4){
			i++;
			b=0;
		}
		x+=i;
		b++;
	}
	switch(b){
		case 1:{
			cout<<"Pen\n";
			break;
		}
		case 2:{
			cout<<"Pineapple\n";
			break;
		}
		case 3:{
			cout<<"Apple\n";
			break;
		}
		case 4:{
			cout<<"Pineapple pen\n";
			break;
		}	
	}
	return 0;
}
