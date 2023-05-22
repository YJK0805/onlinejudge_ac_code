#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin >> n >> m;
    unordered_map<string,long long> mp;
    for(int i = 0;i < n;i++){
    	string a;
    	long long b;
    	cin >> a >> b;
    	mp[a] = b;
    }
    while(m--){
    	string s;
    	long long score = 0;
    	while(cin >> s && s != "."){
    		score += mp[s];
	    }
	    cout << score << "\n";
    }
    return 0;
}
