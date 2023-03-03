// Problem: Quite a Problem
// Contest: Kattis
// URL: https://open.kattis.com/problems/quiteaproblem
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(getline(cin,s)){
        string check="";
        long long f=1;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
            }
            if(s[i]=='p'){
            	check="p";
            }else if(s[i]!=' '){
                check+=s[i];
                if(check=="problem"){
                    cout<<"yes\n";
                    f=0;
                    break;
                }
            }else{
                check="";
            }
        }
        if(f){
            cout<<"no\n";
        }
    }
    return 0;
}