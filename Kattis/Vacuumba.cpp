#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159265359;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	double x = 0,y = 0,ang = 0;
    	for(int i = 0;i < n;i++){
    		double r,d;
            cin >> r >> d;
            ang += r;
            x += d * sin(-ang * pi / 180.0);
            y += d * cos(-ang * pi / 180.0);
    	}
    	cout << fixed << setprecision(6) << x << " " << y << endl;
    }
    return 0;
}
