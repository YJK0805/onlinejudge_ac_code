#include <bits/stdc++.h>
using namespace std;
long long m,n,t,q;
char mp[105][105];
bool is_square(long long x,long long y,long long rad){
	int t = x - rad,b = x + rad,l = y - rad,r = y + rad;
	if(t < 0 || b >= m || l < 0 || r >= n){
		return false;
	}
	for(int i = t;i <= b;i++){
		for(int j = l;j <= r;j++){
			if(mp[i][j] != mp[x][y]){
				return false;
			}
		}
	}
	return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
    	cin >> m >> n >> q;
    	cout << m << " " << n << " " << q << "\n";
    	for(int i = 0;i < m;i++){
    		for(int j = 0;j < n;j++){
    			cin >> mp[i][j];
    		}
    	}
    	while(q--){
    		long long x,y,ans = 0;
    		cin >> x >> y;
    		while(is_square(x,y,ans)){
    			ans++;
    		}
    		cout << ans * 2 - 1 << "\n";
    	}
    }
    return 0;
}
