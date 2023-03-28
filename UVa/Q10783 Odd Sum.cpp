#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for(int times = 1;times <= t;times++){
    	long long a,b,ans = 0;
    	cin >> a >> b;
    	for(int i = a;i <= b;i++){
    		ans += (i % 2) ? i : 0;
    	}
    	cout << "Case " << times << ": " << ans << "\n";
    }
    return 0;
}
