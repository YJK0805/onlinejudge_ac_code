#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<string>> ans(10);
    ans[2] = {"00","01","81"};
    ans[4] = {"0000","0001","2025","3025","9801"};
    ans[6] = {"000000","000001","088209","494209","998001"};
    ans[8] = {"00000000","00000001","04941729","07441984","24502500","25502500","52881984","60481729","99980001"};
    long long n;
    while(cin >> n){
    	for(int i = 0;i < ans[n].size();i++){
    		cout << ans[n][i] << "\n";
    	}
    }
    return 0;
}
