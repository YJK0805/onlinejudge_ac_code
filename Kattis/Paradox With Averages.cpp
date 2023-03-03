// Problem: Paradox With Averages
// Contest: Kattis
// URL: https://open.kattis.com/problems/averageseasy
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--){
        long long m,n;
        cin>>m>>n;
        vector<long long> ncs(m),ne(n);
        long long amoncs=0,amone=0;
        for(int i=0;i<m;i++){
            cin>>ncs[i];
            amoncs+=ncs[i];
        }
        for(int i=0;i<n;i++){
            cin>>ne[i];
            amone+=ne[i];
        }
        double avencs=amoncs*1.0/m,avene=amone*1.0/n;
        long long ans=0;
        for(int i=0;i<m;i++){
            if(ncs[i]<avencs && ncs[i]>avene){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}