#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	string s;
    while(getline(cin,s)){
        long long ans=0,f=0;;
        for(int i=0;i<s.length();i++){
            if(f){
            	if(s[i]==' '){
            		f=0;
				}
			}else{
				if(s[i]!=' '){
					ans++;
					f=1;
				}
			}
        }
        cout<<ans<<"\n";
    }
	return 0;
}
