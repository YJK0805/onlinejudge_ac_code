#include <bits/stdc++.h>
using namespace std;
long long n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		if(n>0){
			cout<<1<<"\n";
		}else if(n<0){
			cout<<-1<<"\n";
		}else{
			cout<<0<<"\n";
		}
	}
	return 0;
}
