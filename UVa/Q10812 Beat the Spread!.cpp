#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
        long long s,d;
        cin >> s >> d;
        long long x = (s + d) / 2,y = (s - d) / 2;
        if((s + d) % 2 != 0 || (s - d) % 2 != 0 || x < y || x < 0 || y < 0){
            cout << "impossible" << endl;
        }else{
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
