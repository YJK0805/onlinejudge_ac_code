#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    vector<string> v;
    while(cin >> s){
    	v.emplace_back(s);
    }
    long long ans = 1,mod = 479001599;
    for(int i = 0;i < v.size();i++){
    	if(v[i] != "%"){
    		ans = ans * stoi(v[i]) % mod;
    	}else{
    		cout << ans << "\n";
    		ans = 1;
    	}
    }
    return 0;
}
