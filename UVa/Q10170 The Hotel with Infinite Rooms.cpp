#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long s,d;
    while(cin >> s >> d){
    	while(d != 0){
    		d -= s;
    		if(d <= 0){
    			cout << s << "\n";
    			break;
    		}else{
    			s++;
    		}
    	}
    }
    return 0;
}
