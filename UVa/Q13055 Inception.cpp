#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    cin.ignore();
    string s;
    stack<string> st;
    while(t--){
    	getline(cin,s);
    	if(s[0] == 'S'){
    		st.emplace(s.substr(6));
    	}else if(s[0] == 'K'){
    		if(!st.empty()){
    			st.pop();
    		}
    	}else{
    		if(st.empty()){
    			cout << "Not in a dream\n";
    		}else{
    			cout << st.top() << "\n";
    		}
    	}
    }
    return 0;
}
