#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,char> a,pair<int,char> b){
	if(a.first != b.first){
		return a.first > b.first;
	}
	return a.second < b.second;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<pair<int,char>> c(26);
	for(int i = 0;i < 26;i++){
		c[i] = make_pair(0,char(i+'A'));
	}
	long long n;
	cin >> n;
	cin.ignore();
	for(int i = 0;i < n;i++){
		string s;
		getline(cin,s);
		for(int j = 0;j < s.size();j++){
			if(s[j] >= 'a' && s[j] <= 'z'){
				c[s[j] - 'a'].first++;
			}
			if(s[j] >= 'A' && s[j] <= 'Z'){
				c[s[j] - 'A'].first++;
			}
		}
	}
	sort(c.begin(),c.end(),cmp);
	for(int i = 0;i < 26;i++){
		if(c[i].first != 0){
			cout << c[i].second << " " << c[i].first << "\n";
		}else{
			break;
		} 
	}
	return 0;
}
