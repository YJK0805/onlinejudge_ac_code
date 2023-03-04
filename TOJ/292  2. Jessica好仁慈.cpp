#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    string c;
    cin >> a >> b >> c;
    if(c == "0"){
    	cout << 0 << "\n";
	}else{
	    long long num = 0,p = 1;
	    for(int i = c.size() - 1;i >= 0;i--){
	    	num += ((c[i] - '0') * p);
	    	p *= a;
	    }
	    string ans = "";
	    while(num){
	    	ans = (char)(num % b + '0') + ans;
	    	num /= b;
	    }
	    cout << ans << "\n";
	}
    return 0;
}
