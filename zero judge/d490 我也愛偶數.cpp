#include <bits/stdc++.h>
using namespace std;
int a,b,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a>>b;
	ans=0;
	for(int i=a;i<=b;i++){
		if(i%2==0){
			ans+=i;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
