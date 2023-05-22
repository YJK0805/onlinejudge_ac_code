#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long p;
    	cin >> p;
    	vector<long long> h(p);
    	for(int i = 0;i < p;i++){
    		cin >> h[i];
    	}
    	long long ans = 0;
    	for(int i = 1;i <= n;i++){
    		if(i % 7 == 0 || i % 7 == 6){
    			continue;
    		}else{
    			for(int j = 0;j < p;j++){
    				if(i % h[j] == 0){
    					ans++;
    					break;
    				}
    			}
    		}
    	}
    	cout << ans << "\n";
    }
    return 0;
}
