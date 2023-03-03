// Problem: Mirror Images
// Contest: Kattis
// URL: https://open.kattis.com/problems/mirror
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
char a[25][25];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t,r,c;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>r>>c;
		for(int j=0;j<r;j++){
			for(int k=0;k<c;k++){
				cin>>a[j][k];
			}
		}
		cout<<"Test "<<i<<"\n";
		for(int j=r-1;j>=0;j--){
			for(int k=c-1;k>=0;k--){
				cout<<a[j][k];
			}
			cout<<"\n";
		}
	}
	return 0;
}
