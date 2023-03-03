#include <bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	m*=8;
	int nmin=n*2,nmax=n*3;
	if(nmax>=m&&nmin<=m){
		cout<<"Yes\n";
	}else if(nmin>m){
		cout<<"Not enough\n";
	}else{
		cout<<"Too much\n";
	}
	return 0;
}
