#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,q,p;
    while(cin >> n >> q){
    	vector<long long> k(n);
    	for(int i = 0;i < n;i++){
    		cin >> k[i];
    	}
    	sort(k.begin(),k.end());
	    while(q--){
	    	cin >> p;
	    	auto it = upper_bound(k.begin(),k.end(),p) - k.begin();
	    	cout << it % 2 << "\n";
	    }
	}
    return 0;
}
