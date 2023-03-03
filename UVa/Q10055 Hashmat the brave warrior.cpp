#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,a,b;
	while(cin>>a>>b){
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		cout<<b-a<<"\n";
	}
	return 0;
}
