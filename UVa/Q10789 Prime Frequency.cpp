#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for(int times = 1;times <= t;times++){
    	string s;
    	cin >> s;
    	long long count[128] = {0};
    	for(int i = 0;i < s.size();i++){
    		count[s[i]]++;
    	}
    	string ans = "";
    	for(int i = 0;i < 128;i++){
    		if(count[i] > 1){
    			long long f = 1;
    			for(int j = 2;j < count[i];j++){
    				if(!(count[i] % j)){
    					f = 0;
    					break;
    				}
    			}
    			if(f){
    				ans += char(i);
    			}
    		}
    	}
    	cout << "Case " << times << ": ";
    	if(ans == ""){
    		cout << "empty\n";	
    	}else{
    		cout << ans <<"\n";
    	}
    }
    return 0;
}
