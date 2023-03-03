#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,t = 0;
    while(cin >> n && n){
    	long long times = 0;
    	if(t){
    		cout <<"\n";
    	}else{
    		t++;
    	}
    	for(int i = 1000;i <= 99999;i++){
    		if(n * i <= 99999){
    			long long f = 1,mp[20] = {0},j = n * i,k = i;
    			if(k < 10000 && j < 10000){
    				f = 0;
    			}else if(k < 10000 || j < 10000){
    				mp[0] = 1;
    			}
    			while(f && j){
    				if(mp[j % 10]){
    					f = 0;
    					break;
    				}else{
    					mp[j % 10] = 1;
    				}
    				j /= 10;
    			}
    			while(f && k){
    				if(mp[k % 10]){
    					f = 0;
    					break;
    				}else{
    					mp[k % 10] = 1;
    				}
    				k /= 10;
    			}
    			if(f){
    				times++;
    				cout << setw(5) << setfill('0') << n * i << " / " << setw(5) << setfill('0') << i <<" = "<< n <<"\n";
    			}    	
    		}
    	}
    	if(!times){
    		cout << "There are no solutions for " << n <<".\n";
    	}
    }
    return 0;
}
