#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		cout<<char(s[i]-7);
	}
	cout<<"\n";
	return 0;
}
