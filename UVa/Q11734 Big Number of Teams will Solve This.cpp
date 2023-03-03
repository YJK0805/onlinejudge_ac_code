#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long q,t=0;
	cin>>q;
	string s1,s2,s1c="",s2c="";
	cin.ignore();
	while(q--){
		t++;
		getline(cin,s1);
		getline(cin,s2);
		if(s1==s2){
			cout<<"Case "<<t<<": Yes\n";
		}else{
			s1c="",s2c="";
			for(int i=0;i<s1.size();i++){
				if(s1[i]!=' '){
					s1c+=s1[i];
				}
			}
			for(int i=0;i<s2.size();i++){
				if(s2[i]!=' '){
					s2c+=s2[i];
				}
			}
			if(s1c==s2c){
				cout<<"Case "<<t<<": Output Format Error\n";
			}else{
				cout<<"Case "<<t<<": Wrong Answer\n";
			}
		}
	}
	return 0;
}
