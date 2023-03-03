#include <bits/stdc++.h>
using namespace std;
set <string> ss;
int main(){ 
	string s;
	while(getline(cin,s)){
		if(!ss.count(s)){
			ss.insert(s);
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
	return 0;
}
