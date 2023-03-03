#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(getline(cin,s)){
		long long sum = 0,ma = 1,t = 0;
		for(long long i = 0;i < s.size();i++){
			if(s[i] >= '0' && s[i] <= '9'){
				t = s[i] - '0';
			}else if(s[i] >= 'A' && s[i] <= 'Z'){
				t = s[i] - 'A' + 10;
			}else if(s[i] >= 'a' && s[i] <= 'z'){
				t = s[i] - 'a' + 36;
			}else{
				continue;
			}
			ma = max(ma,t);
			sum += t;
		}
		int f = 1;
		for(int i = ma;i < 62;i++){
			if(!(sum % i)){
				cout << i + 1 << "\n";
				f = 0;
				break;
			}
		}
		if(f){
			cout << "such number is impossible!\n";
		}
	}
    return 0;
}
