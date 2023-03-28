#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin >> s && s != "0"){
    	long long count[2] = {0};
    	for(int i = 0;i < s.size();i++){
    		count[i % 2] += (s[i] - '0');
    	}
    	if((count[0] - count[1]) % 11 == 0){
    		cout << s << " is a multiple of 11.\n";
    	}else{
    		cout << s << " is not a multiple of 11.\n";
    	}
    }
    return 0;
}
