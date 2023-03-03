#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); 
	long long n;
	cin>>n;
	string s;
	while(n--){
		long long ans=0;
		stack <char> stk;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(!stk.empty()&&stk.top()=='p'&&s[i]=='q'){
				ans++;
				stk.pop();
			}else if(s[i]=='p'){
				stk.push(s[i]);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
