#include<bits/stdc++.h>
using namespace std;
long long ans[50][2];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin>>k;
	ans[0][0]=1;
	ans[0][1]=0;
	ans[1][0]=0;
	ans[1][1]=1;
	for(int i=2;i<=k;i++){
		ans[i][0]=ans[i-1][1];
		ans[i][1]=ans[i-1][1]+ans[i-1][0];
	}
	cout<<ans[k][0]<<" "<<ans[k][1]<<"\n";
	return 0;
}
