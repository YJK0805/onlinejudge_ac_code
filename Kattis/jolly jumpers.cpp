// Problem: Jolly Jumpers
// Contest: Kattis
// URL: https://open.kattis.com/problems/jollyjumpers
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	while(cin>>n){
		vector<long long> v(n),m(n-1);
		long long c=n-1,f=1;
		for(int i=0;i<n;i++){
			cin>>v[i];
			if(i>=1){
				m[i-1]=abs(v[i]-v[i-1]);
			}
		}
		sort(m.begin(),m.end());
		for(int i=0;i<n-1;i++){
			if(m[i]!=i+1){
				f=0;
				break;
			}
		}
		if(f){
			cout<<"Jolly\n";
		}else{
			cout<<"Not jolly\n";
		}
	}
	return 0;
}
