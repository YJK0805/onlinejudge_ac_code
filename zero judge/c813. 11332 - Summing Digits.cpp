#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin >> n && n){
    	long long curnum = 0,num = n;
    	while(n >= 10){
    		curnum = 0,num = n;
    		while(num){
    			curnum += num % 10;
    			num /= 10;
    		}
    		n = curnum;
    	}
    	cout << n <<"\n";
    }
    return 0;
}
