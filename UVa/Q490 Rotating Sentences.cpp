#include <bits/stdc++.h>
using namespace std;
vector <string> v;
string s;
long long mx;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	mx=0;
	while(getline(cin,s)){
		v.push_back(s);
		long long len=s.size();
		mx=max(len,mx);
	}
	for(int i=0;i<v.size();i++){
		while(v[i].size()<mx){
			v[i]+=" ";
		}
	}
	for(int i=0;i<mx;i++){
		for(int j=v.size()-1;j>=0;j--){
			cout<<v[j][i];
		}
		cout<<"\n";
	}
	return 0;
}
