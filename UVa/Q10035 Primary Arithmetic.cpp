#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> a >> b && (a || b)){
		int cur = 0,ans = 0;
		while(a || b){
			cur += (a % 10 + b % 10);
			a /= 10;
			b /= 10;
			ans += (cur / 10);
			cur /= 10;
		}
		if(ans){
			(ans > 1) ? cout << ans << " carry operations.\n" : cout << ans << " carry operation.\n";
		}else{
			cout << "No carry operation.\n";
		}
	}
	return 0;
}
