// Problem: Lost Lineup
// Contest: Kattis
// URL: https://open.kattis.com/problems/lostlineup
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	long long x;
	vector<long long> line(n);
	line[0]=1;
	for(int i=0;i<n-1;i++){
		cin>>x;
		line[x+1]=i+2;
	}
	for(int i=0;i<n;i++){
		cout<<line[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
