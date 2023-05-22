#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    while(getline(cin,s1)){
    	getline(cin,s2);
    	long long mp1[128] = {0},mp2[128] = {0};
    	for(int i = 0;i < s1.size();i++){
    		mp1[s1[i]]++;
    	}
    	for(int i = 0;i < s2.size();i++){
    		mp2[s2[i]]++;
    	}
    	for(int i = 'a';i <= 'z';i++){
    		while(mp1[i] && mp2[i]){
    			cout << char(i);
    			mp1[i]--;
    			mp2[i]--;
    		}
    	}
    	cout << "\n";
    }
    return 0;
}
