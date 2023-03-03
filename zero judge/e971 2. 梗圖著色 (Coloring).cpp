#include <bits/stdc++.h>
using namespace std;
int a[105][105],n,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int start;
	for(int i=0;i<n;i++){
		bool check=false;
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				if(check){
					for(int k=start;k<j;k++){
						a[i][k]=1;
					}
					check=false;
				}else{
					check=true;
					start=j;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
