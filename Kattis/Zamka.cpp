#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long l,d,x;
	cin>>l>>d>>x;
	long long digit;
	for(int i=l;i<=d;i++){
		digit=0;
		for(int j=i;j>0;j/=10){
			digit+=(j%10);
		}
		if(digit==x){
			cout<<i<<"\n";
			break;
		}
	}
	for(int i=d;i>=l;i--){
		digit=0;
		for(int j=i;j>0;j/=10){
			digit+=(j%10);
		}
		if(digit==x){
			cout<<i<<"\n";
			break;
		}
	}
	return 0;
}
