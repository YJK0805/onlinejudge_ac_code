#include <bits/stdc++.h>
using namespace std;
string s,s1;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	getline(cin,s);
	s1=s;
	reverse(s.begin(),s.end());
	if(s==s1){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}
