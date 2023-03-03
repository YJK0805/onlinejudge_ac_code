#include <bits/stdc++.h>
using namespace std;
int t,n,m,a[15][15];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int f=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]!=a[n-i-1][m-j-1]){
					f=0;
					break;
				}
			}
			if(!f){
				break;
			}
		}
		if(f){
			cout<<"go forward\n";
		}else{
			cout<<"keep defending\n";
		}
	}
	return 0;
}
