#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,j;
    cin>>n;
    char a[n][n],b[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]=='*'){
                for(int x=0;x<n;x++){
                    b[i][x]='*';
                    b[x][j]='*';
                }
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<b[i][j];
        }
        cout<<endl;
    }
	return 0;
}
