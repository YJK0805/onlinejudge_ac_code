#include <bits/stdc++.h>
using namespace std;
long long m,n,sumant,ant,ins,sumins;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>m>>n;
	sumant=0;
	sumins=0;
	for(int i=0;i<m;i++){
		cin>>ant;
		sumant+=ant;
	}
	for(int i=0;i<n;i++){
		cin>>ins;
		sumins+=ins;
	}
	if(m>n&&sumant>sumins){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
	return 0;
}
