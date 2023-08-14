#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    	long long n,h;
    	cin >> n >> h;
    	string s;
    	for(int i = 0;i < n;i++){
    		if(i > n - h - 1){
    			s += '1';
    		}else{
    			s += '0';
    		}
    	}
    	do{
    		cout << s << "\n";
    	}while(next_permutation(s.begin(),s.end()));
    	cout << "\n";
    }
    return 0;
}
