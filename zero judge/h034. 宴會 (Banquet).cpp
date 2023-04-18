#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,ma = 0;
    cin >> n;
    vector<string> s(n);
    for(int i = 0;i < n;i++){
    	cin >> s[i];
    	ma = max(ma,(long long)s[i].size());
    }
    for(int i = 0;i < n;i++){
    	s[i].resize(ma,' ');
    }
    for(int i = 0;i < ma;i++){
    	for(int j = 0;j < n;j++){
    		if(isupper(s[j][i])){
    			cout << s[j][i];
    		}
    	}
    }
    cout << "\n";
    return 0;
}
