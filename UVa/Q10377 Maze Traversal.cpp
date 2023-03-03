#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,a,b,i,j,k;
	string x[4]={"N","E","S","W"};
	cin>>n;
	for(i=0;i<n;i++){
        long long s=0,rx,ry;
        cin>>a>>b;
        cin.ignore();
        string maze[a],t;
        for(j=0;j<a;j++){
            getline(cin,maze[j]);
        }
        cin>>rx>>ry;
        cin.ignore();
        while(getline(cin,t)){
            for(j=0;j<t.length();j++){
                if(t[j]=='Q'){
                    break;
                }else if(t[j]=='R'){
                    if(s==3){
                        s=0;
                    }else{
                        s+=1;
                    }
                }else if(t[j]=='L'){
                    if(s==0){
                        s=3;
                    }else{
                        s-=1;
                    }
                }else if(t[j]=='F'){
                    if(s==0&&rx-1>=0&&maze[rx-1][ry]==' '){
                        rx-=1;
                    }else if(s==1&&ry+1<b&&maze[rx][ry+1]==' '){
                        ry+=1;
                    }else if(s==2&&rx+1<a&&maze[rx+1][ry]==' '){
                        rx+=1;
                    }else if(s==3&&ry-1>=0&&maze[rx][ry-1]==' '){
                        ry-=1;
                    }
                }
            }
            if(t[(t.length()-1)]=='Q'){
                break;
            }
        }
        cout<<rx+1<<" "<<ry+1<<" "<<x[s]<<"\n";
        if(i<n-1){
            cout<<"\n";
        }
	}
	return 0;
}
