#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(getline(cin,s)){
		long long password=0;
		for(long long i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
				password+=(s[i]-'0');
			}
		}
		cout<<password<<"\n";
	}
	return 0;
}
