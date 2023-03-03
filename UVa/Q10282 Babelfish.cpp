#include <bits/stdc++.h>
using namespace std;
map <string,string> mp;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(getline(cin,s)&&s!=""){
		stringstream ss;
		string s1,s2;
		ss<<s;
		ss>>s1>>s2;
		mp[s2]=s1;
	}
	while(cin>>s){
		if(mp.count(s)){
			cout<<mp[s]<<"\n";
		}else{
			cout<<"eh\n";
		}
	}
	return 0;
}
