// Problem: Trik
// Contest: Kattis
// URL: https://open.kattis.com/problems/trik
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	char r[128][128],ans='1';
	r['A']['1']='2',r['A']['2']='1',r['A']['3']='3',r['B']['1']='1',r['B']['2']='3',r['B']['3']='2',r['C']['1']='3',r['C']['2']='2',r['C']['3']='1';
	cin>>s;
	for(int i=0;i<s.size();i++){
		ans=r[s[i]][ans];
	}
	cout<<ans<<"\n";
	return 0;
}
