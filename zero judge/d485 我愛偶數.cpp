#include <bits/stdc++.h>
using namespace std;
int a,b,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a>>b;
	ans=(b-a)/2+((a%2==0)||(b%2==0));
	cout<<ans<<"\n";
	return 0;
}
