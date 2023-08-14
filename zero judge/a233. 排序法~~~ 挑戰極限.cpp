#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0;i < n;i++){
    	cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(long long i : v){
    	cout << i << " ";
    }
    cout << "\n";
    return 0;
}
