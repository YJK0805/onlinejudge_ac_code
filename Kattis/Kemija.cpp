// Problem: Kemija
// Contest: Kattis
// URL: https://open.kattis.com/problems/kemija08
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin,s);
	long long f=1;
	for(int i=0;i<s.size();i++){
		if(f){
			cout<<s[i];
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				f=0;
			}
		}else{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				f=1;
			}
		}
	}
	cout<<"\n";
	return 0;
}
