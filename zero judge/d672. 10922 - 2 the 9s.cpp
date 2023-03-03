#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin >> s && s != "0"){
    	long long n = 0;
    	for(int i = 0;i < s.size();i++){
    		n += (s[i] - '0');
    	}
    	if(n % 9){
    		cout << s << " is not a multiple of 9.\n";
    		continue;
    	}
    	cout << s << " is a multiple of 9 and has 9-degree ";
    	long long ans = 1;
    	s = to_string(n);
    	while(s.size() > 1){
    		n = 0;
    		for(int i = 0;i < s.size();i++){
	    		n += (s[i] - '0');
	    	}
	    	ans += (n % 9 == 0);
	    	s = to_string(n);
    	}
    	cout << ans << ".\n";
    }
    return 0;
}
