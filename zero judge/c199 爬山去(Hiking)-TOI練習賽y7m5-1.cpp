#include <bits/stdc++.h>
using namespace std;
long long i,j,n,h,ans,a[10010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	ans=0;
	for(i=0,j=0;i<n;i++){
		cin>>h;
		if(j&&h!=a[j-1]){
			a[j]=h;
			j++;
		}
		if(j==0){
			a[j]=h;
			j++;
		}
	}
	for(int i=1;i<j-1;i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1]){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
