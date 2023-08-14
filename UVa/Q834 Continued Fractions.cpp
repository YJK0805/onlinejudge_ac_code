#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    while(cin >> n >> m){
    	vector<long long> ans;
    	while(n % m){
    		ans.emplace_back(n / m);
    		long long r = n % m;
    		n = m,m = r;
    	}
    	ans.emplace_back(n / m);
    	cout << "[" << ans[0] << ";" << ans[1];
    	for(int i = 2;i < ans.size();i++){
    		cout << "," << ans[i];
    	}
    	cout << "]\n";
    }
    return 0;
}