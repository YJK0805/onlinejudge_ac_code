#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(cin>>s){
		reverse(s.begin(),s.end());
		int i=0;
		if(s=="0"){
			cout<<0<<"\n";
		}else{
			while(s[i]=='0'){
				i++;
			}
			if(i==s.size()){
				cout<<0;
			}else{
				for(i;i<s.size();i++){
					cout<<s[i];
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}

