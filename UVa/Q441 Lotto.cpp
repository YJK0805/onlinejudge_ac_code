#include <bits/stdc++.h>
using namespace std;
long long a[15],ans[15];
void dfs(int d,int s,int k){
	if(d==6){
		cout<<ans[0];
		for(int i=1;i<6;i++){
			cout<<" "<<ans[i];
		}
		cout<<"\n";
		return;
	}
	for(int i=s;i<k;i++){
		ans[d]=a[i];
		dfs(d+1,i+1,k);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long k,t=0;
	while(cin>>k&&k){
		if(t++){
			cout<<"\n";
		}
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		dfs(0,0,k);
	}
	return 0;
}
