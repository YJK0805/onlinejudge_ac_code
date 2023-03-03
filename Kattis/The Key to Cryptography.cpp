// Problem: The Key to Cryptography
// Contest: Kattis
// URL: https://open.kattis.com/problems/keytocrypto
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string m="",ct,sw;
	cin>>ct>>sw;
	long long i;
	if(sw.size()>ct.size()){
		for(i=0;i<ct.size();i++){
			m+=char(((ct[i]-'A')-(sw[i]-'A')+26)%26+'A');
		}
	}else{
		for(i=0;i<sw.size();i++){
			m+=char(((ct[i]-'A')-(sw[i]-'A')+26)%26+'A');
		}
		long long j;
		for(j=0;i<ct.size();i++,j++){
			m+=char(((ct[i]-'A')-(m[j]-'A')+26)%26+'A');
		}
	}
	cout<<m<<"\n";
	return 0;
}
