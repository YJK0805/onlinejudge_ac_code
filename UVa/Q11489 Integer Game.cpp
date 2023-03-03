#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    long long times = 1;
    while(t--){
    	string n;
    	long long sum = 0,cnt[5] = {0};
    	cin >> n;
    	cout << "Case " << times++ << ": ";
    	for(int i = 0;i < n.size();i++){
    		cnt[(n[i] - '0') % 3]++;
    		sum += (n[i] - '0');
    	}
    	sum %= 3;
    	char ans;
    	if(n.size() == 1){
    		ans = 'S';
    	}else if(cnt[sum] < 1){
    		ans = 'T';
    	}else{
    		if(sum != 0){
	    		if(cnt[0] % 2){
	    			ans = 'T';
	    		}else{
	    			ans = 'S';
	    		}
	    	}else{
	    		if(cnt[0] % 2){
	    			ans = 'S';
	    		}else{
	    			ans = 'T';
	    		}
	    	}
    	}
    	cout << ans <<"\n";
    }
    return 0;
}
