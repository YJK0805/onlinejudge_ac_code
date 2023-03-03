#include <bits/stdc++.h>
using namespace std;
int t,a,b,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for(int i = 1;i <= t;i++){
		cin >> a >> b;
		ans = 0;
		for(int j = a;j <= b;j++){
			if(j % 2){
				ans += j;
			}
		}
		cout << "Case " << i << ": " << ans << "\n";
	}
	return 0;
}
