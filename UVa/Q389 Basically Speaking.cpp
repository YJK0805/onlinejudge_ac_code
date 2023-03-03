#include <bits/stdc++.h>
using namespace std;
int main(){
    const double EPS=1e-7;
    long long a,b;
    string s;
    while(cin>>s>>a>>b){
        long long before=0;
        for(int i=s.length()-1,j=0;i>=0;i--,j++){
            if(s[i]>='0'&&s[i]<='9'){
                before+=((s[i]-'0')*(pow(a,j)+EPS));
            }else{
                before+=((s[i]-'A'+10)*(pow(a,j)+EPS));
            }
        }
        string ans="";
        if(before==0){
            ans="      0";
        }else{
            for(;before&&ans.length()<=7;before/=b){
                long long t=before%b;
                if(t>=10){
                    ans=char(t-10+'A')+ans;
                }else{
                    ans=char(t+'0')+ans;
                }
            }
        }
        if(ans.length()>7){
            ans="  ERROR";
        }else{
            for(int i=ans.length();i<7;i++){
                ans=" "+ans;
            }
        }
        cout<<ans<<"\n";
    }
	return 0;
}
