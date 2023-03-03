#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    string s;
    set<string> st;
    cin>>n;
    while (n--){
        cin>>s;
        st.insert(s);
    }
    cin>>n;
    while(n--){
        cin>>s;
        if (st.count(s)){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
            st.insert(s);
        }
    }
    return 0;
}