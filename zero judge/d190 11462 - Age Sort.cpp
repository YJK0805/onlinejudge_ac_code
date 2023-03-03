#include <bits/stdc++.h>
using namespace std;
long long a[2000100];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	long long n;
	while(cin>>n&&n){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
