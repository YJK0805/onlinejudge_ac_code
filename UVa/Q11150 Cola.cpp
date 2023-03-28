#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin >> n){
    	long long ans = n;
    	n += 1;
    	while(n >= 3){
    		ans += n / 3;
    		n = n / 3 + n % 3;
    	}
    	cout << ans << "\n";
    }
    return 0;
}
