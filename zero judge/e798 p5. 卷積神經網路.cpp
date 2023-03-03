#include <bits/stdc++.h>
using namespace std;
int n,a[25][25];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i+=2){
		for(int j=0;j<n;j+=2){
			cout<<max(max(a[i][j],a[i+1][j+1]),max(a[i+1][j],a[i][j+1]))<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
