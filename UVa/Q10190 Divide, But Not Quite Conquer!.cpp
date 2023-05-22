#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    while(cin >> n >> m){
    	vector<long long> ans;
    	bool flag = true;
    	if(n <= 1 || m <= 1 || n < m){
    		flag = false;
    	}else{
	    	while(n != 1){
	    		ans.emplace_back(n);
	    		if(n % m){
	    			flag = false;
	    			break;
	    		}
	    		n /= m;
	    	}
	    }
    	if(flag){
    		for(int i = 0;i < ans.size();i++){
    			cout << ans[i] << " ";
    		}
    		cout << "1\n";
    	}else{
    		cout << "Boring!\n";
    	}
    }
    return 0;
}
