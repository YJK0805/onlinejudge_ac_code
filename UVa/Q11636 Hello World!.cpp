#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,time = 1;
    while(cin >> n&&n >= 0){
    	cout << "Case " << time++ << ": " << ceil(log2(n)) <<"\n";
    }
    return 0;
}
