#include <bits/stdc++.h>
using namespace std;
string s;
long long x;
long long f(long long a){
	x++;
	if(s[x]=='0'){
		return 0;
	}else if(s[x]=='1'){
		return a*a;
	}else{
		long long r=0;
		for(int i=0;i<4;i++){
			r+=f(a/2);
		}
		return r;
	}
}
int main(){
	long long n;
	cin>>s>>n;
	x=-1;
	cout<<f(n)<<"\n";
	return 0;
}
