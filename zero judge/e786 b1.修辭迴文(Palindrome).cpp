#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	long long len=s.length(),f=1;
	if(len%2==0){
		string s2="";
		for(int i=0,j=len-1;i<=len/2-1;i++,j--){
			if(s[i]==s[j]){
				s2=s2+s[i];
				continue;
			}else{
				f=0;
				break;
			}
		}
		if(f){
			cout<<"YES\n"<<s2<<"\n";
		}else{
			cout<<"NO\n";
		}
	}else{
		cout<<"NO\n";
	}
	return 0;
}
