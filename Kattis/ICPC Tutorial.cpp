// Problem: ICPC Tutorial
// Contest: Kattis
// URL: https://open.kattis.com/problems/tutorial
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
double cal(long long n,long long t){
	double num = 1;
	if(t == 1){
		for(int i = 2;i <= n;i++){
			num *= i;
		}
	}else if(t == 2){
		num = pow(2,n);
	}else if(t == 3){
		num = n * n * n * n;
	}else if(t == 4){
		num = n * n * n;
	}else if(t == 5){
		num = n * n;
	}else if(t == 6){
		num = n * log2(n);
	}else if(t == 7){
		num = n;
	}
	return num;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m,n,t;
    cin >> m >> n >> t;
    if((t == 1 && n >= 13) || (t == 2 && n >= 30) || cal(n,t) > m){
    	cout << "TLE\n";
    }else{
    	cout << "AC\n";
    }
    return 0;
}
