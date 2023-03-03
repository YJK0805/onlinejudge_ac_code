#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    while(cin>>n){
        map<string,long long> mp;
        string s;
        for(int i=1,j=1;i<=n;i++){
            cin>>s;
            if(mp.count(s)){
                cout<<"Old! "<<mp[s]<<"\n";
            }else{
                cout<<"New! "<<j<<"\n";
                mp[s]=j;
                j++;
            }
        }
    }
    return 0;
}