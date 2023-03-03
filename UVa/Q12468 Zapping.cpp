#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    while(cin >> a >> b && a != -1 && b != -1){
    	long long ans = max(a,b) - min(a,b);
    	cout << min(ans,100 - ans) <<"\n";
    }
    return 0;
}
