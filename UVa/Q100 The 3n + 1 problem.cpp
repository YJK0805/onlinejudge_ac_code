#include<iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long max=0,i,j,k,t=0,a;
	while(cin >> i >> j){
		max = 0;
		cout << i << " " << j << " ";
		if(i > j){
			swap(i,j);
		}
		for(k = i;k <= j;k++){
			t = 1;
			a = k;
			while(a != 1){
				if(a % 2 == 0){
					a /= 2;
				}else if(a % 2 == 1){
					a = 3 * a + 1;
				}
				t++;
			}
			if(t > max){
				max = t;
			}
		}
		cout << max << "\n";	
	}
	return 0;
}
