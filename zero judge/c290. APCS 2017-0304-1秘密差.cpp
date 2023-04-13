#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    long long count[2] = {0};
    for(int i = 0;i < s.size();i++){
    	count[i % 2] += (s[i] - '0');
    }
    cout << abs(count[0] - count[1]) << "\n";
    return 0;
}
