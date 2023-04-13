// Problem: Mia
// Contest: Kattis
// URL: https://open.kattis.com/problems/mia
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
long long com(long long a,long long b){
	if(max(a,b) == 2 && min(a,b) == 1){
		return 0;
	}else if(a == b){
		return a;
	}else{
		return max(a,b) * 10 + min(a,b);
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long r0,r1,s0,s1;
    while(cin >> s0 >> s1 >> r0 >> r1 && (r0 || r1 || s0 || s1)){
    	long long ss = com(s0,s1),rr = com(r0,r1);
    	if(ss != rr){
    		if(ss == 0){
    			cout << "Player 1 wins.\n";
    		}else if(rr == 0){
    			cout << "Player 2 wins.\n";
    		}else if(ss < 10 && rr < 10){
    			if(ss > rr){
    				cout << "Player 1 wins.\n";
    			}else{
    				cout << "Player 2 wins.\n";
    			}
    		}else if(ss < 10){
    			cout << "Player 1 wins.\n";
    		}else if(rr < 10){
    			cout << "Player 2 wins.\n";
    		}else{
    			if(ss > rr){
    				cout << "Player 1 wins.\n";
    			}else{
    				cout << "Player 2 wins.\n";
    			}
    		}
    	}else{
    		cout << "Tie.\n";
    	}
    }
    return 0;
}
