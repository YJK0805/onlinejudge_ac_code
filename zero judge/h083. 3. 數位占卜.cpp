#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
long long ans = 0;
void find(string s){
	for(int i = 1;i * 2 <= s.size();i++){
        auto s1 = s.substr(0,i),s2 = s.substr(s.size() - i,i);
        if(s1 != s2){
        	continue;
        }else{
            if(st.find(s.substr(i,s.size() - i - i)) != st.end()){
            	ans++;
            }
        }
    }
    return;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long m;
    cin >> m;
    string s;
    for(int i = 0;i < m;i++){
        cin >> s;
        st.insert(s);
    }
    auto it = st.begin();
    while(it != st.end()){
        find(*it);
        it++;
    }
    cout << ans;
    return 0;
}
