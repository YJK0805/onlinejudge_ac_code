#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long q,num;
    multiset<long long> st;
    while(cin >> q){
    	if(q == 1){
    		cin >> num;
    		st.insert(num);
    	}else if(q == 2){
    		cout << *st.rbegin() << "\n";
    		st.erase(st.find(*st.rbegin()));
    	}else{
    		cout << *st.begin() << "\n";
    		st.erase(st.find(*st.begin()));
    	}
    }
    return 0;
}
