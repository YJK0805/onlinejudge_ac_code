// Problem: No Duplicates
// Contest: Kattis
// URL: https://open.kattis.com/problems/nodup
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s,sc="";
	getline(cin,s);
	set <string> ss;
	long long f=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]-'A'+'a';
		}
		if(s[i]==' '){
			if(ss.count(sc)){
				f=1;
				break;
			}
			ss.insert(sc);
			sc="";
		}else{
			sc+=s[i];
		}
	}
	if(ss.count(sc)){
		f=1;
	}
	if(f){
		cout<<"no\n";
	}else{
		cout<<"yes\n";
	}
	return 0;
}
