// Problem: Skener
// Contest: Kattis
// URL: https://open.kattis.com/problems/skener
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
char a[55][55];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long r,c,zr,zc;
	cin>>r>>c>>zr>>zc;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int rt=0;rt<zr;rt++){
			for(int j=0;j<c;j++){
				for(int rc=0;rc<zc;rc++){
					cout<<a[i][j];
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}
