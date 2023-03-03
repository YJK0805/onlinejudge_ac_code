#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200010]={0},b[200010]={0};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i){
			b[i]=a[i]+b[i-1];
		}else{
			b[i]=a[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
