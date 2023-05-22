#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    while(cin >> s1 >> s2){
    	long long check = 0;
    	for(int i = 0;i < (int)s2.size();i++){
    		if(s2[i] == s1[check]){
    			check++;
    		}
    		if(check == s1.size()){
    			break;
    		}
    	}
    	if(check == s1.size()){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}
    }
    return 0;
}
