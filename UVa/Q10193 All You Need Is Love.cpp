#include <bits/stdc++.h>
using namespace std;
long long gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
    	cin >> s1 >> s2;
    	long long num1 = 0,num2 = 0,now = 1;
    	for(int j = s1.size() - 1;j >= 0;j--){
    		num1 += (now * (s1[j] - '0'));
    		now *= 2;
    	}
    	now = 1;
    	for(int j = s2.size() - 1;j >= 0;j--){
    		num2 += (now * (s2[j] - '0'));
    		now *= 2;
    	}
    	if(gcd(num1,num2) != 1){
    		cout << "Pair #" << i << ": All you need is love!\n";
    	}else{
    		cout << "Pair #" << i << ": Love is not all you need!\n";
    	}
    }
    return 0;
}
