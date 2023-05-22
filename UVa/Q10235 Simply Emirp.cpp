#include <bits/stdc++.h>
using namespace std;
int prime[1000010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    prime[1] = 1;
    for(int i = 2;i < 1000005;i++){
        if(prime[i] == 0){
            for(int j = i + i;j < 1000005;j += i){
                prime[j] = 1;
            }
        }
    }
    long long n;
    while(cin >> n){
    	long long m = 0,cnt = n;
		while(cnt){
			m = m * 10 + cnt % 10;
			cnt /= 10;
		}
		if(prime[n]){
			cout << n << " is not prime.\n";
		}else{
			if(m != n && !prime[m]){
				cout << n << " is emirp.\n";
			}else{
				cout << n << " is prime.\n";
			}
		}
    }
    return 0;
}
