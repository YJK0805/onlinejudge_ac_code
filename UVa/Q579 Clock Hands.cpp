#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long h,m;
    char c;
    while(cin >> h >> c >> m && (h || m)){
    	double ansh = h * 30.0 + m / 60.0 * 30.0,ansm = m * 6.0,ans;
    	ans = abs(ansh - ansm);
    	if(ans > 180.0){
    		ans -= 360;
    	}
    	cout << fixed << setprecision(3) << abs(ans) <<"\n";
    }
    return 0;
}
