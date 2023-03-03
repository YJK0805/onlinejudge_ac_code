#include <bits/stdc++.h>
using namespace std;
double n,m,monster[1000000];
long long ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	ans=0;
	m*=1.25;
	for(int i=0;i<n;i++){
		cin>>monster[i];
		if(m>=monster[i]){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
