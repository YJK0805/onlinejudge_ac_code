#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long ans = 0,i,j,k,t = 0,a;
	while(cin >> i >> j){
		ans = 0;
		cout << i << " " << j << " ";
		if(i > j){
			swap(i,j);
		}
		for(k = i;k <= j;k++){
			t = 1;
			a = k;
			while(a != 1){
				(a % 2) ? a = 3 * a + 1 : a /= 2;
				t++;
			}
			ans = max(ans,t);
		}
		cout << ans << "\n";	
	}
	return 0;
}
