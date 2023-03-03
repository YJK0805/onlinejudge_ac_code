#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t,i;
    string s;
    cin>>t>>s;
    for(i=0;i<s.size();i++){
    	if(s[i]-t>='A'){
    		cout<<(char)(s[i]-t);
		}else{
			cout<<(char)(s[i]-t+26);
		}
	}
	cout<<'\n';
    return 0;
}
