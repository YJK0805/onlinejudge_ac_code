#include <bits/stdc++.h>
using namespace std;
int n,a[100];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[n-1]-a[0]==n-1){
		cout<<a[0]<<" "<<a[n-1]<<" yes\n";
	}else{
		cout<<a[0]<<" "<<a[n-1]<<" no\n";
	}
	return 0;
}
