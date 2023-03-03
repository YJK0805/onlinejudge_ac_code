#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(getline(cin,s)){
    	long long count = 0,now = 0;
    	for(int i = 0;i < s.size();i++){
    		count = max(now,count);
    		if(s[i] != ' '){
    			now = 0;
    		}else{
    			now++;
    		}
    	}
    	long long ans = log2(count);
    	if(ans != log2(count)){
    		ans++;
    	}
    	cout << ans <<"\n";
    }
    return 0;
}
