#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.first != b.first ? a.first < b.first : a.second > b.second;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int t = 0;
    while(getline(cin,s)){
    	if(t++){
    		cout <<"\n";
    	}
    	vector<pair<int,int>> ans(128);
    	for(int i = 0;i < 128;i++){
    		ans[i] = {0,i};
    	}
    	for(int i = 0;i < s.size();i++){
    		ans[int(s[i])].first++;
    	}
    	sort(ans.begin(),ans.end(),cmp);
    	for(int i = 0;i < 128;i++){
    		if(ans[i].first){
    			cout << ans[i].second << " " << ans[i].first <<"\n";
    		}
    	}
    }
    return 0;
}
