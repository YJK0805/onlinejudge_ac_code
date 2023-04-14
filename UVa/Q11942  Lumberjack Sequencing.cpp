#include <bits/stdc++.h>
using namespace std;
int n,a[15],b[15];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	cout << "Lumberjacks:\n";
	while(n--){
		bool ans = true;
		for(int i = 0;i < 10;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b,b + 10);
		if(a[0] > a[1]){
			for(int i = 0,j = 9;i < 10;i++,j--){
				if(a[i] != b[j]){
					ans = false;
				}
			}
		}else{
			for(int i = 0;i < 10;i++){
				if(a[i] != b[i]){
					ans = false;
				}
			}
		}
		if(ans){
			cout << "Ordered\n";
		}else{
			cout << "Unordered\n";
		}
	}
	return 0;
}
