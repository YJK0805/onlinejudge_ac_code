#include <bits/stdc++.h>
using namespace std;
int l;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> l && l){
		int r = -1,dis,d = -1,ans = 2000000;
		cin >> s;
		for(int i = 0;i < l;i++){
			if(s[i] == 'R'){
				if(d != -1){
					dis = i - d;
					ans = min(dis,ans);
				}
				r = i;
			}else if(s[i] == 'D'){
				if(r != -1){
					dis = i - r;
					ans = min(dis,ans);
				}
				d = i;
			}else if(s[i] == 'Z'){
				ans = 0;
				break;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
