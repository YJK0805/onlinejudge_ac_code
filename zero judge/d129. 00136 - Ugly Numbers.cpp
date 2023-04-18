#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<long long> st;
    st.insert(1);
    st.insert(2);
    long long ans = 0;
    for(int i = 0;i < 1500;i++){
    	auto p = st.begin();
    	st.insert(*p * 2);
    	st.insert(*p * 3);
    	st.insert(*p * 5);
    	st.erase(p);
    	ans = *p;
    }
    cout << "The 1500'th ugly number is " << ans << ".\n";
    return 0;
}
