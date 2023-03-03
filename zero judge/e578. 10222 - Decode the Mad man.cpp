#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string ms = "`1234567890-=qwertyuiop[]\ asdfghjkl;'zxcvbnm,./";
    char m[132];
    for(int i = 2;i < ms.size();i++){
    	m[ms[i]] = ms[i - 2];
    }
    string s;
    while(getline(cin,s)){
    	for(int i = 0;i < s.size();i++){
    		if(s[i] == '\\'){
    			cout << '[';
    		}else if(s[i] != ' '){
	    		cout << m[tolower(s[i])];
	    	}else{
	    		cout <<" ";
	    	}
    	}
    	cout <<"\n";
    }
    return 0;
}
