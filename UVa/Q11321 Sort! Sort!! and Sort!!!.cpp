#include <bits/stdc++.h>
using namespace std;
long long n,m;
bool cmp(long long a,long long b){
	if(a % m != b % m){
		return a % m < b % m;
	}else{
		if(abs(a) % 2 != abs(b) % 2){
			return abs(a) % 2 > abs(b) % 2;
		}else{
			return abs(a) % 2 ? a > b : a < b;
		}
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n >> m && n && m){
    	cout << n << " " << m << "\n";
    	vector<long long> v(n);
    	for(auto &i : v){
    		cin >> i;
    	}
    	sort(v.begin(),v.end(),cmp);
    	for(auto &i : v){
    		cout << i << "\n";
    	}
    }
    cout << n << " " << m << "\n";
    return 0;
}
