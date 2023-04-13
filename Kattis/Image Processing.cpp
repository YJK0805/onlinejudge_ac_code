// Problem: Image Processing
// Contest: Kattis
// URL: https://open.kattis.com/problems/imageprocessing
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long h,w,n,m;
    cin >> h >> w >> n >> m;
    vector<vector<int>> ima(h,vector<int>(w)),ker(n,vector<int>(m));
    for(int i = 0;i < h;i++){
    	for(int j = 0;j < w;j++){
    		cin >> ima[i][j];
    	}
    }
    for(int i = n - 1;i >= 0;i--){
    	for(int j = m - 1;j >= 0;j--){
    		cin >> ker[i][j];
    	}
    }
    for(int i = 0;i < h - n + 1;i++){
    	for(int j = 0;j < w - m + 1;j++){
    		long long ans = 0;
    		for(int k = 0;k < n;k++){
    			for(int l = 0;l < m;l++){
    				ans += ((ima[i + k][j + l]) * (ker[k][l]));
    			}
    		}
    		cout << ans << " ";
    	}
    	cout << "\n";
    }
    return 0;
}
