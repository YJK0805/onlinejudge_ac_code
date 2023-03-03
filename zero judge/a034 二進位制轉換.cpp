#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while(cin>>n){
		string s="";
		while(n>0){
			s=char(n%2+'0')+s;
			n/=2;
		}
		cout<<s<<"\n";
	}
	return 0;
}
