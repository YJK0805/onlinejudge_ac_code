#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<long long> fib(50);
    fib[0] = 0,fib[1] = 1;
    for(int i = 2;i < 50;i++){
    	fib[i] = fib[i - 1] + fib[i - 2];
    }
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	string ans = "";
    	bool flag = false;
    	for(int i = 49,cnt = n;i >= 2;i--){
    		if(fib[i] <= cnt){
    			cnt -= fib[i];
    			flag = true;
    			ans += '1';
    		}else if(flag){
    			ans += '0';
    		}
    	}
    	cout << n << " = " << ans << " (fib)\n";
    }
    return 0;
}
