#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> ans;
    long long s,d,day = 0;
    while(n--){
    	cin >> s >> d;
    	if(d > 100){
    		ans.emplace_back(s);
    		day += (d - 100);
    	}
    }
    sort(ans.begin(),ans.end());
    for(auto &i : ans){
    	cout << i << " ";
    }
    if(ans.size()){
    	cout << "\n";
    }
    cout << day * 5 << "\n";
    return 0;
}
