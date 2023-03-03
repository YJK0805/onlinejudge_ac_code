#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x;
	cin>>x;
	long long digit=x;
	while(digit/10){
		long long mul=1;
		while(digit>0){
			if(digit%10){
				mul*=(digit%10);
				digit/=10;
			}else{
				digit/=10;
			}
		}
		digit=mul;
	}
	cout<<digit<<"\n";
	return 0;
}
