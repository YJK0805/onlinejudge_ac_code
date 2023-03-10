#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin >> n){
    	vector<int> v(n);
    	for(auto &i : v){
    		cin >> i;
    	}
    	sort(v.begin(),v.end());
    	long long mid1 = v[(n - 1) / 2],mid2 = v[n / 2],ans = 0;
    	for(auto &i : v){
    		ans += (i == mid1 || i == mid2);
    	}
    	cout << mid1 << " " << ans << " " << mid2 - mid1 + 1 << "\n";
    }
    return 0;
}
