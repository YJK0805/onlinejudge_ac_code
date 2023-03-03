#include <bits/stdc++.h>
using namespace std;
map <string,vector<string> > mp;
int n;
string s1,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>s1>>s2;
		mp[s2].push_back(s1);
	}
	cin>>s2;
	sort(mp[s2].begin(),mp[s2].end());
	if(!mp[s2].empty()){
		for(int i=0;i<mp[s2].size();i++){
			cout<<mp[s2][i]<<"\n";
		}
	}else{
		cout<<"No\n";
	}
	return 0;
}
