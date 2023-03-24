#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	string s;
	while(cin >> s && s != "0"){
		if(s != "0"){ 
			int a1 = 0,a2 = 0;
			for(int i = 0;i < s.size();i++){
				(i % 2 == 0) ? a1 += (s[i] - '0') : a2 += (s[i] - '0');
			}
			if((a1 - a2) == 0 || (a1 - a2) % 11 == 0){
				cout << s << " is a multiple of 11.\n";
			}else{
				cout << s << " is not a multiple of 11.\n";
			}
		} 
	}
	return 0;
}
