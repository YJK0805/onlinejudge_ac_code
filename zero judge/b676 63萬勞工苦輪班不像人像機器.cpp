#include <bits/stdc++.h>
using namespace std;
string s="UGYTI";
int x;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>x){
		cout<<s[x%5]<<"\n";
	}
	return 0;
}
