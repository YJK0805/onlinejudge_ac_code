// Problem: Line Them Up
// Contest: Kattis
// URL: https://open.kattis.com/problems/lineup
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<string> s(n),s1(n);
	set<string> sc;
	for(int i=0;i<n;i++){
		cin>>s[i];
		s1[i]=s[i];
	}
	sort(s1.begin(),s1.end());
	if(s==s1){
		cout<<"INCREASING\n";
	}else{
		reverse(s1.begin(),s1.end());
		if(s==s1){
			cout<<"DECREASING\n";
		}else{
			cout<<"NEITHER\n";
		}
	}
	return 0;
}
