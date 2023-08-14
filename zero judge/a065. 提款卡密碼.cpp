#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(int i = 1;i < s.size();i++){
    	cout << abs(s[i - 1] - s[i]);
    }
    cout << "\n";
    return 0;
}
