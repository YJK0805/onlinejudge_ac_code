// Problem: Hissing Microphone
// Contest: Kattis
// URL: https://open.kattis.com/problems/hissingmicrophone
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	long long f=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='s'&&s[i+1]=='s'){
			f=1;
			break;
		}
	}
	if(f){
		cout<<"hiss\n";
	}else{
		cout<<"no hiss\n";
	}
	return 0;
}
