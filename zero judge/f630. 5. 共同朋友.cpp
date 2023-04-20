#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    bitset<2510> bt[2510];
    for(int i = 1;i <= n;i++){
    	long long d;
    	cin >> d;
    	for(int j = 0;j < d;j++){
    		long long f;
    		cin >> f;
    		bt[i][f] = true;
    	}
    }
    long long ans = 0;
    for(int i = 1;i < n;i++){
    	for(int j = i + 1;j <= n;j++){
    		if((bt[i] & bt[j]).any()){
    			ans++;
    		}
    	}
    }
    cout << ans << "\n";
    return 0;
}
