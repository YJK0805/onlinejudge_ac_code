#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector <string> v;
	string s;
	long long mx = 0;
	while(getline(cin,s)){
		v.push_back(s);
		mx = max((long long)s.size(),mx);
	}
	for(int i = 0;i < v.size();i++){
		v[i].resize(mx,' ');
	}
	for(int i = 0;i < mx;i++){
		for(int j = v.size() - 1;j >= 0;j--){
			cout << v[j][i];
		}
		cout << "\n";
	}
	return 0;
}
