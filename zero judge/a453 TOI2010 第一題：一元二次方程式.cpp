#include <bits/stdc++.h>
using namespace std;
int main(){
	long long m;
	cin>>m;
	while(m--){
		long long a,b,c;
		cin>>a>>b>>c;
		long long n=b*b-4*a*c,n2;
		n2=(int)sqrt(n);
		if(b<0){
			cout<<"No\n";
		}else if(b==0){
			cout<<"Yes\n";	
		}else if(n2*n2==n){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}
	} 
	return 0;
}
