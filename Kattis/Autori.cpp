// Problem: Autori
// Contest: Kattis
// URL: https://open.kattis.com/problems/autori
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s,anss="";
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			anss+=s[i];
		}
	}
	cout<<anss<<"\n";
	return 0;
}
