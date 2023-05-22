#include <bits/stdc++.h>
using namespace std;
const double PI = acos(0.0) * 2.0;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double r,s,a;
    string u;
    r = 6440.0;
    while(cin >> s >> a >> u){
    	if(u == "min"){
    		a /= 60.0;
    	}
        if(a > 180.0){
        	a = 360.0 - a;
        }
        double chord,arc;
        chord = (r + s) * cos((90.0 - a / 2.0)/ 180.0 * PI) * 2.0;
        arc = 2.0 * PI * (r + s) * a / 360.0;
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
    return 0;
}
