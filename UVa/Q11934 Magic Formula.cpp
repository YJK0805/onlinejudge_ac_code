#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b,c,d,l;
    while(cin >> a >> b >> c >> d >> l && (a || b || c || d || l)){
    	long long ans = 0;
    	for(int i = 0;i <= l;i++){
    		ans += ((a * i * i + b * i + c) % d == 0);
    	}
    	cout << ans << "\n";
    }
    return 0;
}
