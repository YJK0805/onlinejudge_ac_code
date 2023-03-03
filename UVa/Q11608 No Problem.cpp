#include <bits/stdc++.h>
using namespace std;
int s,a[15],need[15],t;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	t = 1;
	while(cin >> s){
		if(s < 0){
			break;
		}
		a[0] = 0;
		a[0] += s;
		for(int i = 1;i <= 12;i++){
			cin >> a[i];
		}
		for(int i = 0;i < 12;i++){
			cin >> need[i];
		}
		cout << "Case " << t <<":\n";
		t++;
		for(int i = 0;i < 12;i++){
			if(a[i] >= need[i]){
				cout << "No problem! :D\n";
				a[i + 1] += (a[i] - need[i]);
			}else{
				cout << "No problem. :(\n";
				a[i + 1] += a[i];
			}
		}
	}
	return 0;
}
