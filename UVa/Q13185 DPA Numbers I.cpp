#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long count = 0;
    	for(int i = 1;i < n;i++){
    		if(!(n % i)){
    			count += i;
    		}
    	}
    	if(count == n){
    		cout << "perfect\n";
    	}else if(count > n){
    		cout << "abundant\n";
    	}else{
    		cout << "deficient\n";
    	}
    }
    return 0;
}
