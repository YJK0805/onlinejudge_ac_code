#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    while(cin >> s1 >> s2){
    	long long check1[26] = {0},check2[26] = {0};
    	for(int i = 0;i < s1.size();i++){
    		check1[s1[i] - 'A']++;
    		check2[s2[i] - 'A']++;
    	}
    	sort(check1,check1+26);
    	sort(check2,check2+26);
    	long long f = 1;
    	for(int i = 0;i < 26;i++){
    		if(check1[i] != check2[i]){
    			f = 0;
    			break;
    		}
    	}
    	if(f){
    		cout << "YES\n";
    	}else{
    		cout << "NO\n";
    	}
    }
    return 0;
}
