#include <bits/stdc++.h>
using namespace std;
long long n,m,k;
vector<vector<long long>> q(60,vector<long long>(60));
vector<long long> c(60);
long long cal(){
	vector<vector<long long>> city(60,vector<long long>(60,0));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			city[c[i]][j] += q[i][j];
		}
	}
	long long ans = 0;
	for(int i = 0;i < m;i++){
		for(int j = 0;j < m;j++){
			if(i == j){
				ans += city[i][j];
			}else{
				if(city[i][j] <= 1000){
					ans += (city[i][j] * 3);
				}else{
					ans += (3000 + (city[i][j] - 1000) * 2);
				}
			}
		}
	}
	return ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    for(int i = 0;i < n;i++){
    	for(int j = 0;j < m;j++){
    		cin >> q[i][j];
    	}
    }
    long long ans = INT_MAX;
    while(k--){
    	for(int i = 0;i < n;i++){
    		cin >> c[i];
    	}
    	ans = min(cal(),ans);
    }
    cout << ans << "\n";
    return 0;
}
