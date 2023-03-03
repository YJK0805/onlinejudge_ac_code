#include <bits/stdc++.h>
using namespace std;
struct NUM{
	int c,count;
};
bool cmp(NUM a,NUM b){
	if(a.count != b.count){
		return a.count < b.count;
	}else{
		return a.c > b.c;
	}
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
    	NUM ans[128];
    	for(int i = 0;i < 128;i++){
    		ans[i].c = i;
    		ans[i].count = 0;
    	}
    	for(int i = 0;i < s.size();i++){
    		ans[int(s[i])].count++;
    	}
    	sort(ans,ans + 128,cmp);
    	for(int i = 0;i < 128;i++){
    		if(ans[i].count){
    			cout << ans[i].c << " " << ans[i].count <<"\n";
    		}
    	}
    }
    return 0;
}
