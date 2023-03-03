#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    long long times = 1;
    while(cin >> s && s != "#"){
    	if(s == "HELLO"){
    		cout << "Case " << times++ << ": ENGLISH\n";
    	}else if(s == "HOLA"){
    		cout << "Case " << times++ << ": SPANISH\n";
    	}else if(s == "HALLO"){
    		cout << "Case " << times++ << ": GERMAN\n";
    	}else if(s == "BONJOUR"){
    		cout << "Case " << times++ << ": FRENCH\n";
    	}else if(s == "CIAO"){
    		cout << "Case " << times++ << ": ITALIAN\n";
    	}else if(s == "ZDRAVSTVUJTE"){
    		cout << "Case " << times++ << ": RUSSIAN\n";
    	}else{
    		cout << "Case " << times++ << ": UNKNOWN\n";
    	}
    }
    return 0;
}
