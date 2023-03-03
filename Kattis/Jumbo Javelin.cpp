#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,l,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l;
		count+=l;
	}
	count-=(n-1);
	cout<<count<<"\n";
	return 0;
}
