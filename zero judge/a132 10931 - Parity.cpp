#include <bits/stdc++.h>
using namespace std;
long long I,P;
string B;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>I&&I){
		B="";
		P=0;
		while(I!=0){
			B=char(I%2+'0')+B;
			if(I%2){
				P++;
			}
			I/=2;
		}	
		cout<<"The parity of "<<B<<" is "<<P<<" (mod 2).\n";
	}
	return 0;
}
