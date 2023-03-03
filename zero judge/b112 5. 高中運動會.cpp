#include <bits/stdc++.h>
using namespace std;
int n,x,y;
int gcd(int a,int b){
	if(a%b==0){
		return b;
	}else{
		return gcd(b,a%b);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		cin>>x;
		for(int i=1;i<n;i++){
			cin>>y;
			x=gcd(x,y);
		}
		cout<<x<<"\n";
	}
	return 0;
}
