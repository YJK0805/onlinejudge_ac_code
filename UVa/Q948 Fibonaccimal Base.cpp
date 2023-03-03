#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<long long> fib_base(45);
    fib_base[0] = 0,fib_base[1] = 1;
    for(int i = 2;i < 45;i++){
    	fib_base[i] = fib_base[i - 1] + fib_base[i - 2];
    }
    reverse(fib_base.begin(),fib_base.end());
    long long num,n;
    cin >> n;
    while(n--){
    	cin >> num;
    	cout << num << " = ";
    	string ans = "";
    	long long check = 1;
    	for(int i = 0;i < 43;i++){
    		if(check){
				if(fib_base[i] <= num){
					check = 0;
					ans += '1';
					num -= fib_base[i];
				}
			}else{
				if(fib_base[i] <= num){
					check = 0;
					ans += '1';
					num -= fib_base[i];
				}else{
					ans += '0';
				}
			}
    	}
    	cout << ans <<" (fib)\n";
    }
    return 0;
}
