// Problem: This Ain't Your Grandpa's Checkerboard
// Contest: Kattis
// URL: https://open.kattis.com/problems/thisaintyourgrandpascheckerboard
// Memory Limit: 1024 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
using namespace std;
char a[25][25];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    long long f=1,c[128]={0},e[128]={0};
    for(int i=0;i<n;i++){
        e['B']=e['W']=c['B']=c['W']=0;
        for(int j=0;j<n;j++){
            e[a[i][j]]++;
            c[a[i][j]]++;
            if(a[i][j]=='W'){
                e['B']=0;
            }else{
                e['W']=0;
            }
            if(e['B']>=3||e['W']>=3){
                f=0;
                break;
            }
        }
        if(c['B']!=c['W']){
            f=0;
        }
        if(!f){
            break;
        }
    }
    if(f){
        for(int j=0;j<n;j++){
            e['B']=e['W']=c['B']=c['W']=0;
            for(int i=0;i<n;i++){
                e[a[i][j]]++;
                c[a[i][j]]++;
                if(a[i][j]=='W'){
                    e['B']=0;
                }else{
                    e['W']=0;
                }
                if(e['B']>=3||e['W']>=3){
                    f=0;
                    break;
                }
            }
            if(c['B']!=c['W']){
                f=0;
            }
            if(!f){
                break;
            }
        }
    }
    cout<<f<<"\n";
    return 0;
}