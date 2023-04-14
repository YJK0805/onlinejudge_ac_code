#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(getline(cin,s)){
    	string ss = "";
    	for(auto &i : s){
    		if(i != ' '){
    			ss += i;
    		}else{
    			reverse(ss.begin(),ss.end());
    			cout << ss << " ";
    			ss = "";
    		}
    	}
    	reverse(ss.begin(),ss.end());
		cout << ss << "\n";
    }
    return 0;
}
