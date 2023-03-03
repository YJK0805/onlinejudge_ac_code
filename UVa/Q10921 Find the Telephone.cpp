#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "22233344455566677778889999",q;
    while(cin >> q){
    	for(int i = 0;i < q.size();i++){
    		if(q[i] >= 'A' && q[i] <= 'Z'){
    			cout << s[q[i] - 'A'];
    		}else{
    			cout << q[i];
    		}
    	}
    	cout <<"\n";
    }
    return 0;
}