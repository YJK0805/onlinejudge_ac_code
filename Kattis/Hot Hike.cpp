// Problem: Hot Hike
// Contest: Kattis
// URL: https://open.kattis.com/problems/hothike
// Memory Limit: 1024 MB
// Time Limit: 2000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<long long> t(n);
	long long d=1,anst=50;
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	for(int i=0;i<n-2;i++){
		if(max(t[i],t[i+2])<anst){
			anst=max(t[i],t[i+2]);
			d=i+1;
		}
	}
	cout<<d<<" "<<anst<<"\n";
	return 0;
}
