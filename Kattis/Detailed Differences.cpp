// Problem: Detailed Differences
// Contest: Kattis
// URL: https://open.kattis.com/problems/detaileddifferences
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	string s1,s2;
	for(int i=1;i<=n;i++){
		cin>>s1>>s2;
		cout<<s1<<"\n"<<s2<<"\n";
		for(int j=0;j<s1.size();j++){
			if(s1[j]==s2[j]){
				cout<<".";
			}else{
				cout<<"*";
			}
		}
		cout<<"\n";
		if(i!=n){
			cout<<"\n";
		}
	}
	return 0;
}
