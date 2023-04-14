// Problem: Pet
// Contest: Kattis
// URL: https://open.kattis.com/problems/pet
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long win = -1,score = 0;
    for(int i = 0;i < 5;i++){
    	long long n,count = 0;
    	for(int j = 0;j < 4;j++){
    		cin >> n;
    		count += n;
    	}
    	if(count > score){
    		win = i + 1;
    		score = count;
    	}
    }
    cout << win << " " << score << "\n";
    return 0;
}
