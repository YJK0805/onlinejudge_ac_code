#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long x;
    while(cin >> x){
    	string s;
    	cin.ignore();
    	getline(cin,s);
    	stringstream ss(s);
    	vector<long long> a;
        while(ss >> s){
            a.emplace_back(stoi(s));
        }
        a.pop_back();
    	reverse(a.begin(),a.end());
        long long mul = 1,ans = 0;
        for (int i = 0;i < a.size();i++){
            ans += a[i] * (i + 1) * mul;
            mul *= x;
        }
        cout << ans << "\n";
    }
    return 0;
}
