#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,i,j,a,b,time=0;
    while(cin>>n>>m){
        if(n==0&&m==0){
            break;
        }
        time++;
        if(time!=1){
            cout<<"\n";
        }
        long long bomb[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                bomb[i][j]=0;
            }
        }
        char map[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>map[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(map[i][j]=='*'){
                    for(a=i-1;a<=i+1;a++){
                        for(b=j-1;b<=j+1;b++){
                            if(map[i][j]=='*'&&a>=0&&b>=0&&a<=n-1&&b<=m-1){
                                bomb[a][b]++;
                            }
                        }
                    }
                }
            }
        }
        cout<<"Field #"<<time<<":"<<"\n";
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(map[i][j]=='*'){
                    cout<<"*";
                }else{
                    cout<<bomb[i][j];
                }
            }
            cout<<"\n";
        }
    }
	return 0;
}
