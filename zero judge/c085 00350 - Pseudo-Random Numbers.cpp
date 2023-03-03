#include <bits/stdc++.h>
using namespace std;
int main(){
    long long count,z,i,m,l,next,temp,index=1;
    while(cin>>z>>i>>m>>l){
        if(z==0&&i==0&&m==0&&l==0){
            break;
        }else{
            count=1;
            z%=m;
            i%=m;
            temp=(z*l+i)%m;
            next=(z*l+i)%m;
            while(temp!=l){
                temp=(z*temp+i)%m;
                if(temp==next){
                break;
                }
                count++;
            }
            cout<<"Case "<<index<<": "<<count<<"\n";
            index++;
        }
    }
	return 0;
}
