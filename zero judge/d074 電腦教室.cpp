#include <bits/stdc++.h>
using namespace std;
int n,num,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>num;
		ans=max(ans,num);
	}
	cout<<ans<<"\n";
	return 0;
}
