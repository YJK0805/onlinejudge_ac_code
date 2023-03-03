#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(cin>>s){
		if(s[0]!='-'){
			if(s[1]=='x'){
				int len=s.size()-3,ans=0;
				for(int i=2,l=len;i<s.size();l--,i++){
					if(s[i]>='A'&&s[i]<='Z'){
						long long x=(s[i]-'A'+10)*(pow(16,l)/1);
						ans+=x;
					}else{
						ans+=(s[i]-'0')*(pow(16,l));
					}
				}
				cout<<setbase(10)<<ans<<"\n";
			}else{
				int len=s.size()-1,ans=0;
				for(int i=0,l=len;i<s.size();l--,i++){
					if(s[i]>='A'&&s[i]<='Z'){
						long long x=(s[i]-'A'+10)*(pow(10,l)/1);
						ans+=x;
					}else{
						long long x=(s[i]-'0')*(pow(10,l)/1);
						ans+=x;
					}
				}
				cout<<"0x"<<setbase(16)<<uppercase<<ans<<"\n";
			}
		}else{
			break;
		}
	}
	return 0;
}

