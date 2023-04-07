#include <bits/stdc++.h>
using namespace std;
long long v[4] = {10000000,100000,1000,100};
string ss[4] = {" kuti"," lakh"," hajar"," shata"};
void solve(long long n){
	for(int i = 0;i < 4;i++){
		if(n >= v[i]){
			solve(n / v[i]);
			cout << ss[i];
			n %= v[i];
		}
	}
	if(n){
		cout << " " << n;
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,t = 1;
    while(cin >> n){
    	cout << setw(4) << t++ << ".";
    	if(n){
    		solve(n);
    	}else{
    		cout << " 0";
    	}
    	cout << "\n";
    }
    return 0;
}
