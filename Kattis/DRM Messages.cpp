// Problem: DRM Messages
// Contest: Kattis
// URL: https://open.kattis.com/problems/drmmessages
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    long long len = s.size(),rot1 = 0,rot2 = 0;
    for(int i = 0;i < len / 2;i++){
    	rot1 += (s[i] - 'A');
    	rot2 += (s[len / 2 + i] - 'A');
    }
    for(int i = 0;i < len / 2;i++){
    	s[i] = (char)((s[i] - 'A' + rot1) % 26 + 'A');
    	s[len / 2 + i] = (char)((s[len / 2 + i] - 'A' + rot2) % 26 + 'A');
    }
    for(int i = 0;i < len / 2;i++){
    	cout << (char)((s[i] - 'A' + s[len / 2 + i] - 'A') % 26 + 'A');
    }
    cout << "\n";
    return 0;
}
