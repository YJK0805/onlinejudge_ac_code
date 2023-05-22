#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
	for(int i = 0;i < t;i++){
		if(i){
			cout << "\n";
		}
    	long long n;
    	cin >> n;
    	vector<int> num1(n),num2(n);
    	for(int i = n - 1;i >= 0;i--){
    		cin >> num1[i] >> num2[i];
    	}
    	string ans = "";
    	int carry = 0;
    	for(int i = 0;i < n;i++){
    		carry += (num1[i] + num2[i]);
    		ans += char(carry % 10 + '0');
    		carry /= 10;
    	}
    	if(carry){
    		ans += '1';
    	}
    	reverse(ans.begin(),ans.end());
    	cout << ans << "\n";
    }
    return 0;
}
