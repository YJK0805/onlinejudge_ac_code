#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for(int times = 0;times < t;times++){
    	if(times){
    		cout << "\nCase " << times + 1 << ":\n";
    	}else{
    		cout << "Case " << times + 1 << ":\n";
    	}
    	vector<long long> mp(40);
    	for(int i = 0;i < 36;i++){
    		cin >> mp[i];
    	}
    	long long n;
    	cin >> n;
    	for(int i = 0;i < n;i++){
    		long long num,cheap = INT_MAX;
    		cin >> num;
    		vector<long long> ans(40);
    		for(int i = 2;i <= 36;i++){
    			long long cnt = num,cost = 0;
    			while(cnt){
    				cost += mp[cnt % i];
    				cnt /= i;
    			}
    			cheap = min(cheap,cost);
    			ans[i] = cost;
    		}
    		cout << "Cheapest base(s) for number " << num << ":";
    		for(int j = 2;j <= 36;j++){
    			if(ans[j] == cheap){
    				cout << " " << j;
    			}
    		}
    		cout << "\n";
    	}
    }
    return 0;
}
