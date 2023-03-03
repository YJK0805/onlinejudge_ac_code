#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a % b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin >> n && n){
    	long long ans = 0;
		for(int i = 1;i < n;i++){
			for(int j = i + 1;j <= n;j++){
			    ans += gcd(i,j);
			}
		}
		cout << ans <<"\n";
	}
    return 0;
}
