#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<string,int> mp;
    long long n;
    cin >> n;
    string s;
    while(n--){
    	cin >> s;
    	mp[s]++;
    	getline(cin,s);
    }
    for(auto i : mp){
    	cout << i.first << " " << i.second <<"\n";
    }
    return 0;
}
