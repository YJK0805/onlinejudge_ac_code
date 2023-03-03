#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
	stack<char> st;
	string s;
    cin >> n;
    cin.ignore();
    while(n--){
    	getline(cin,s);
    	while(!st.empty()){
    		st.pop();
    	}
    	long long f = 1;
    	for(int i = 0;i < s.size();i++){
    		if(s[i] == '(' || s[i] == '['){
    			st.push(s[i]);
    		}else if(s[i] == ')'){
    			if(st.empty() || st.top() != '('){
    				f = 0;
    				break;
    			}
    			st.pop();
    		}else if(s[i] == ']'){
    			if(st.empty() || st.top() != '['){
    				f = 0;
    				break;
    			}
    			st.pop();
    		}
    	}
    	if(!st.empty()){
    		f = 0;
    	}
		if(f){
			cout <<"Yes\n";
		}else{
			cout <<"No\n";
		}
    }
    return 0;
}
