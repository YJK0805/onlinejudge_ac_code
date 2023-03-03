#include <bits/stdc++.h>
using namespace std;
int main(){ 
	long long n;
	cin>>n;
	string s;
	while(n--){
		long long ans=0;
		cin>>s;
		stack <char> a;
		for(int i=0;i<s.length();i++){
			if(!a.empty()&&a.top()=='('&&s[i]==')'){
				ans++;
				a.pop();
			}else{
				a.push(s[i]);
			}
		}
		if(!a.empty()){
			ans=0;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
