#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long I;
	while(cin >> I && I){
		string B = "";
		long long P = 0;
		while(I != 0){
			B = char(I % 2 + '0') + B;
			if(I % 2){
				P++;
			}
			I /= 2;
		}	
		cout << "The parity of " << B << " is " << P << " (mod 2).\n";
	}
	return 0;
}
