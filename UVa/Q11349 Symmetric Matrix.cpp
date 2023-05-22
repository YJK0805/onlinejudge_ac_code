#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for(int times = 1;times <= t;times++){
    	string s;
    	long long n;
    	cin >> s >> s >> n;
    	vector<long long> v(n * n);
    	for(int i = 0;i < n * n;i++){
    		cin >> v[i];
    	}
    	bool ans = true;
    	for(int i = 0;i < n * n / 2 + 1;i++){
    		if(v[i] != v[n * n - i - 1] || v[i] < 0 || v[n * n - i - 1] < 0){
    			ans = false;
    			break;
    		}
    	}
    	if(ans){
    		cout << "Test #" << times << ": Symmetric.\n";
    	}else{
    		cout << "Test #" << times << ": Non-symmetric.\n";
    	}
    }
    return 0;
}
