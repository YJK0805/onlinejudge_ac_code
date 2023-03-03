#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long s;
    cin >> s;
    while(s--){
		double n,p,i;
    	cin >> n >> p >> i;
    	double q = 1 - p;
    	if(p == 0){
    		cout << fixed << setprecision(4) << double(0) <<"\n";
    	}else{
    		cout << fixed << setprecision(4) << (pow(q, (i - 1)) * p) / (1 - pow(q, n)) <<"\n";
    	}
    }
    return 0;
}
