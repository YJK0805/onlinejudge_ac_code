#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    vector<long long> salary(3);
    cin >> t;
    for(int i = 1;i <= t;i++){
    	for(int j = 0;j < 3;j++){
    		cin >> salary[j];
    	}
    	sort(salary.begin(),salary.end());
    	cout << "Case " << i << ": " << salary[1] <<"\n";
    }
    return 0;
}