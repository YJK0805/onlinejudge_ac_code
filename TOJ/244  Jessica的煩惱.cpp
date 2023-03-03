#include <bits/stdc++.h>
using namespace std;
int main(){
	long long i,n;
	string s;
	cin>>n>>s;
	for(i=0;i<n;i++){
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]=s[i]-'A'+'a';
		}else if(s[i]>='a'&&s[i]<='z'){
			s[i]=s[i]-'a'+'A';
		}
	}
	cout<<s<<"\n";
	return 0;
}
