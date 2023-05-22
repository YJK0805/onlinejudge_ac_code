#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long v,v0,eps = 1000000000;
    while(cin >> v >> v0 && (v || v0)){
    	if(v <= v0){
    		cout << 0 << "\n";
    	}else{
    		double Long = 0,V,now;
	        int p = 0,i;
	        for(i = 1;i <= v;i++) {
	            V = (double)v / i;
	            char s1[100],s2[100];
	            if(V - v0 > 0){
	               now = 0.3 * sqrt(V - v0) * i;
	            }else{
	               break;
				}
				if((long long)(now * eps / 1) == (long long)(Long * eps / 1)){
					p = 0;
				}else if(now > Long){
					p = i;
					Long = now;
				}else if(now < Long){
					break;
				}
	        }
	        cout << p << "\n";
    	}
    }
    return 0;
}
