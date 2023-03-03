// Problem: A New Alphabet
// Contest: Kattis
// URL: https://open.kattis.com/problems/anewalphabet
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin,s);
	string ans[30]={"@","8","(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			cout<<ans[s[i]-'A'];
		}else if(s[i]>='a'&&s[i]<='z'){
			cout<<ans[s[i]-'a'];
		}else{
			cout<<s[i];
		}
	}
	cout<<"\n";
	return 0;
}
