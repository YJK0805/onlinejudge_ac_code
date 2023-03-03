#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		for(int i=0;i<s.length();i++){
			cout<<(char)(s[i]-7);
		}
		cout<<"\n";
	}
	return 0;
}
