#include <bits/stdc++.h>
using namespace std;
typedef struct round{
	double x1,y1,x2,y2;
}Round;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<Round> r;
    char c;
    Round cnt;
    while(cin >> c && c != '*'){
    	cin >> cnt.x1 >> cnt.y1 >> cnt.x2 >> cnt.y2;
    	r.emplace_back(cnt);
    }
    double x,y;
    long long count = 1;
    while(cin >> x >> y){
    	if(x == 9999.9 && y == 9999.9){
    		break;
    	}
    	int f = 1;
    	for(int i = 0;i < r.size();i++){
    		if(x > r[i].x1 && x < r[i].x2 && y < r[i].y1 && y > r[i].y2){
    			cout << "Point " << count << " is contained in figure " << i + 1 << "\n";
    			f = 0;
    		}
    	}
    	if(f){
    		cout << "Point " << count << " is not contained in any figure\n";
    	}
    	count++;
    }
    return 0;
}
