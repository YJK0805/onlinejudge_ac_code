#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    vector<long long> v;
    while(cin >> n){
    	v.emplace_back(n);
    	sort(v.begin(),v.end());
    	long long len = v.size();
    	if(len % 2){
    		cout << v[len / 2] <<"\n";    		
    	}else{
    		cout << (v[len / 2] + v[len / 2 - 1]) / 2 <<"\n";

    	}
    }
    return 0;
}
