// Problem: Križaljka
// Contest: Kattis
// URL: https://open.kattis.com/problems/krizaljka
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin >> a >> b;
    vector<vector<char>> ans(b.size(),vector<char>(a.size(),'.'));
    long long i,j;
    for(i = 0;i < a.size();i++){
    	for(j = 0;j < b.size();j++){
    		if(a[i] == b[j]){
    			break;
    		}
    	}
    	if(a[i] == b[j]){
			break;
		}
    }
    for(int k = 0;k < a.size();k++){
    	ans[j][k] = a[k];
    }
    for(int k = 0;k < b.size();k++){
    	ans[k][i] = b[k];
    }
    for(int i = 0;i < b.size();i++){
    	for(int j = 0;j < a.size();j++){
    		cout << ans[i][j];
    	}
    	cout << "\n";
    }
    return 0;
}
