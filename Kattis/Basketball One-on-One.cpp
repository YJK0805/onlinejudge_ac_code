// Problem: Basketball One-on-One
// Contest: Kattis
// URL: https://open.kattis.com/problems/basketballoneonone
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a=0,b=0,f=1;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i+=2){
		if(s[i]=='A'){
			a+=(s[i+1]-'0');
		}else{
			b+=(s[i+1]-'0');
		}
		if(f){
			if(a==10&&b==10){
				f=0;
			}else{
				if(a==11||b==11){
					break;
				}
			}
		}else{
			if(abs(a-b)>=2){
				break;
			}
		}
	}
	if(a>b){
		cout<<"A\n";
	}else{
		cout<<"B\n";
	}
	return 0;
}
