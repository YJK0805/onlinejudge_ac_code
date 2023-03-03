#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,times = 1;
    while(cin >> n){
    	bool check[20010];
    	memset(check,false,sizeof(check));
    	vector<long long> v(n);
    	long long f = 1;
    	for(int i = 0;i < n;i++){
    		cin >> v[i];
    		if(v[i] < 1){
    			f = 0;
    		}
    		if(i && v[i] < v[i - 1]){
    			f = 0;
    		}
    	}
    	if(f){
	    	for(int i  = 0;i < n;i++){
	    		for(int j = i;j < n;j++){
	    			long long sum = v[i] + v[j];
	    			if(check[sum]){
	    				f = 0;
	    				break;
	    			}else{
	    				check[sum] = true;
	    			}
	    		}
	    	}
	    }
    	if(f){
    		cout << "Case #" << times++ << ": It is a B2-Sequence.\n\n";
    	}else{
    		cout << "Case #" << times++ << ": It is not a B2-Sequence.\n\n";
    	}
    }
    return 0;
}
