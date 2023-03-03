#include <bits/stdc++.h>
using namespace std;
long long m,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>m){
		if(m>25){
			ans=85-m;
		}else{
			ans=25-m;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
