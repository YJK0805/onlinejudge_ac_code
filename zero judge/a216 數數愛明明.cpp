#include <bits/stdc++.h>
using namespace std;
long long f(int n){
	if(n!=1){
		return (n+f(n-1));
	}else{
		return 1;
	}
}    
long long g(int n){
	if(n!=1){
		return (f(n)+g(n-1));
	}else{
		return 1;
	}
}
int main(){
	long long n;
	while(cin>>n){
		cout<<f(n)<<" "<<g(n)<<"\n";
	}
	return 0;
}
