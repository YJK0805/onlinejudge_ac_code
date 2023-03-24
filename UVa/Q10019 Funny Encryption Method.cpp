#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    	long long b2 = 0,b1 = 0,n;
    	cin >> n;
    	for(int i = n;i > 0;i >>= 1){
    		b1 += (i & 1);
    	}
    	long long num = 0,cnt = 1;
    	while(n){
    		num += cnt * (n % 10);
    		cnt *= 16;
    		n /= 10;
    	}
    	for(int i = num;i > 0;i >>= 1){
    		b2 += (i & 1);
    	}
    	cout << b1 << " " << b2 <<"\n";
    }
    return 0;
}
