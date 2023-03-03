#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<long long> man(100,0),woman(100,0);
	man[0] = 0,woman[0] = 1;
	for(int i = 1;i < 80;i++){
		man[i] = woman[i - 1] + man[i - 1];
		woman[i] = man[i - 1] + 1;
	}
    long long n;
    while(cin >> n && n != -1){
    	cout << man[n] << " " << woman[n] + man[n] <<"\n";
    }
    return 0;
}
