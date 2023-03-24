#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    while(cin >> n >> m){
        double ans = 0;
        if(n / 2 <= m){
            m = n - m;
        }
        int i = 1;
        while(i <= m){
            ans += (log10(n--) - log10(i++));
        }
        cout << (int)(ans + 1) << "\n";
    }
    return 0;
}
