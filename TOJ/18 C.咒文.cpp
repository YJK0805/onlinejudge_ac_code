#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(getline(cin,s)){
    	string s1 = "",s2 = "";
    	for(int i = 0;i < s.size();i++){
    		if(isalpha(s[i])){
    			s1 += tolower(s[i]);
    			s2 += tolower(s[i]);
    		}
    	}
    	reverse(s1.begin(),s1.end());
    	(s1 == s2) ? cout << "SETUP! " << s << "\n" : cout << s << "\n";
    }
    return 0;
}
