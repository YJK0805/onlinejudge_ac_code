#include <bits/stdc++.h>
using namespace std;
long long n,m;
string step1(string s,string e){
	long long one = 0;
	for(int i = 0;i < e.size();i++){
		one += (e[i] == '1');
	}
	if(one % 2 == 0){
		return s;
	}else{
		if(s.size() % 2){
			return s.substr(s.size() / 2 + 1) + s[s.size() / 2] + s.substr(0,s.size() / 2);
		}else{
			return s.substr(s.size() / 2) + s.substr(0,s.size() / 2);
		}
	}
}
string step2(string s,string e){
	string ans = "";
	for(int i = e.size() - 1;i >= 0;i--){
		if(e[i] == '1'){
			ans += s[i];
		}else{
			ans = s[i] + ans;
		}
	}
	return ans;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0;i < n;i++){
    	cin >> v[i];
    }
    string enc;
    cin >> enc;
    for(int i = n - 1;i >= 0;i--){
    	enc = step2(enc,v[i]);
    	enc = step1(enc,v[i]);
    }
    cout << enc << "\n";
    return 0;
}
