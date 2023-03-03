#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string ans[7] = {"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
    int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i = 1;i <= 12;i++){
    	day[i] += day[i - 1];
    }
    long long t;
    cin >> t;
    long long m,d;
    while(t--){
    	cin >> m >> d;
    	d += day[m - 1];
    	cout << ans[d % 7] <<"\n";
    }
    return 0;
}
