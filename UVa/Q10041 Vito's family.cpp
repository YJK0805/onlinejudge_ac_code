#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	while(n--){
		long long r;
		cin >> r;
		vector<long long> s(r);
		for(int i = 0;i < r;i++){
			cin >> s[i];
		}
		sort(s.begin(),s.end());
		long long x = (r % 2) ? s[r / 2] : (s[r / 2] + s[r / 2 - 1]) / 2,ans = 0;
		for(int i = 0;i < r;i++){
			ans += (abs(s[i] - x));
		}
		cout << ans <<"\n";
	}
	return 0;
}
