#include <bits/stdc++.h>
using namespace std;
long long solve(long long x,long long y){
	return (x + y) * (x + y + 1) / 2 + x;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for(int i = 1;i <= t;i++){
    	cout << "Case " << i << ": ";
    	long long x1,x2,y1,y2;
    	cin >> x1 >> y1 >> x2 >> y2;
    	cout << solve(x2,y2) - solve(x1,y1) << "\n";
    }
    return 0;
}
