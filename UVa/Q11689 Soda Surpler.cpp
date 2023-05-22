#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    while(n--){
    	long long e,f,c;
    	cin >> e >> f >> c;
    	e += f;
    	long long ans = 0;
    	while(e / c){
    		ans += (e / c);
    		e = e / c + e % c;
    	}
    	cout << ans << "\n";
    }
    return 0;
}
