#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
    	getline(cin,s);
    	stringstream ss(s);
    	long long ans = 0;
    	while(ss >> s){
    		ans += stoi(s);
    	}
    	cout << ans << "\n";
    }
    return 0;
}
