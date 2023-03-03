// Problem: Tajna
// Contest: Kattis
// URL: https://open.kattis.com/problems/tajna
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	long long len=s.size(),r=1,c;
	for(int i=2;i<=len;i++){
		if(len%i==0){
			if(len/i>=i){
				r=i;
			}
		}
	}
	c=len/r;
	for(int i=0;i<r;i++){
		for(int j=i;j<len;j+=r){
			cout<<s[j];
		}
	}
	cout<<"\n";
	return 0;
}
