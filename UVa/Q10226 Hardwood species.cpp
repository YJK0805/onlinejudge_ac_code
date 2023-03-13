#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin,s);
    while(n--){
    	map<string,int> mp;
    	mp.clear();
    	int count = 0;
    	while(getline(cin,s) && !s.empty()){
    		mp[s]++;
    		count++;
    	}
    	for(auto &[i,j] : mp){
    		if(i != ""){
	    		cout << i << " " << fixed << setprecision(4) << (double)(100 * j * 1.0 / count * 1.0) << "\n";
	    	}
    	}
    	if(n != 0){
	    	cout << "\n";
	    }
    }
    return 0;
}
