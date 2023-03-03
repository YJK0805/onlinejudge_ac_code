#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long m,n,num;
	cin>>n>>m;
	vector<vector<long long> > a(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>num;
			a[i].push_back(num);
		}
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
