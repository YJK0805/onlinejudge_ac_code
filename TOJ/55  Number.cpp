#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a[N],n,m,id;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>m;
	while(m--){
		cin>>id;
		cout<<upper_bound(a,a+n,id)-lower_bound(a,a+n,id)<<"\n";
	}
	return 0;
}
