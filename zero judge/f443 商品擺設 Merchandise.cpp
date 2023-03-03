#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long x,y,i,j,amount[n],num[n],b1,b2,f1=1,f2=1;
    for(i=0;i<n;i++){
        cin>>amount[i];
    }
    for(i=0;i<n;i++){
        cin>>num[i];
    }
    for(i=0;i<n;i++){
        long long max=-100,min=100;
        if(num[i]==-1&&f1==1){
            f1=0;
            b1=i;
        }else if(num[i]==-1&&f1==0){
            f2=0;
            b2=i;
        }
        if(f1==0&&f2==0&&b1+1!=b2){
            for(j=b1+1;j<=b2-1;j++){
                if(amount[j]>max){
                    max=amount[j];
                    x=j;
                }
                if(amount[j]<min){
                    min=amount[j];
                    y=j;
                }
            }
            swap(num[x],num[y]);
            f2=1;
            b1=b2;
            max=-100;
            min=100;
        }else if(b1+1==b2){
            f2=1;
            b1=b2;
            max=-100;
            min=100;
        }
    }
    for(i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";
	return 0;
}
