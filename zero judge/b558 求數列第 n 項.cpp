#include <bits/stdc++.h>
using namespace std;
long long a[510],n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	a[1]=1;
	for(int i=2;i<=500;i++){
		a[i]=a[i-1]+i-1;
	}
	while(cin>>n){
		cout<<a[n]<<"\n";
	}
	return 0;
}
