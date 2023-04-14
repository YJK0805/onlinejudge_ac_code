// Problem: Mastering Mastermind
// Contest: Kattis
// URL: https://open.kattis.com/problems/mastermind
// Memory Limit: 2048 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    string s1,s2;
    cin >> s1 >> s2;
    vector<long long> c1(26,0),c2(26,0);
    long long r = 0,s = 0;
    for(int i = 0;i < n;i++){
    	c1[s1[i] - 'A']++;
    	c2[s2[i] - 'A']++;
    	r += (s1[i] == s2[i]);
    }
    for(int i = 0;i < 26;i++){
    	s += min(c1[i],c2[i]);
    }
    cout << r << " " << s - r << "\n";
    return 0;
}
