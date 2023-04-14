#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t = 1;
	while(cin >> n){
		long long a[n],ans = 0;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		for(int i = 0;i < n;i++){
			long long x = 1;
			for(int j = i;j < n;j++){
				x *= a[j];
				ans = max(ans,x);
			}
		}
		cout << "Case #" << t << ": The maximum product is " << ans << ".\n\n";
		t++;
	}
	return 0;
}

