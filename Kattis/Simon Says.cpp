// Problem: Simon Says
// Contest: Kattis
// URL: https://open.kattis.com/problems/simonsays
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	n++;
	string s,sc="Simon says";
	while(n--){
		getline(cin,s);
		long long f=1;
		for(int i=0;i<10;i++){
			if(sc[i]!=s[i]){
				f=0;
				break;
			}
		}
		if(f){
			for(int i=10;i<s.size();i++){
				cout<<s[i];
			}
			cout<<"\n";
		}
	}
	return 0;
}
