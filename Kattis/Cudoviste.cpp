// Problem: Cudoviste
// Contest: Kattis
// URL: https://open.kattis.com/problems/cudoviste
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long r,c;
    cin >> r >> c;
    vector<vector<char>> m(r,vector<char>(c,0));
    for(int i = 0;i < r;i++){
    	for(int j = 0;j < c;j++){
    		cin >> m[i][j];
    	}
    }
    vector<long long> ans(5,0);
    for(int i = 0;i < r - 1;i++){
    	for(int j = 0;j < c - 1;j++){
    		long long car = 0;
    		if(m[i][j] == 'X'){
    			car++;
    		}
    		if(m[i + 1][j] == 'X'){
    			car++;
    		}
    		if(m[i][j + 1] == 'X'){
    			car++;
    		}
    		if(m[i + 1][j + 1] == 'X'){
    			car++;
    		}
    		if(m[i][j] == '#'){
    			continue;
    		}
    		if(m[i + 1][j] == '#'){
    			continue;
    		}
    		if(m[i][j + 1] == '#'){
    			continue;
    		}
    		if(m[i + 1][j + 1] == '#'){
    			continue;
    		}
    		ans[car]++;
    	}
    }
    for(auto &i : ans){
    	cout << i << "\n";
    }
    return 0;
}
