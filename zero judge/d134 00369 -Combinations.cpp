#include<bits/stdc++.h>
using namespace std;
unsigned long long ans[110][110];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	for(int i=1;i<=100;i++){
		ans[i][0]=1;
		ans[i][i]=1;
	}
	for(int i=2;i<=100;i++){
		for(int j=1;j<i;j++){
			ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
		}
	}
	while(cin>>n>>m&&n&&m){
		cout<<n<<" things taken "<<m<<" at a time is "<<ans[n][m]<<" exactly.\n";
	}
	return 0;
}
