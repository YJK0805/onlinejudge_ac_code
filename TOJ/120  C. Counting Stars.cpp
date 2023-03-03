#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long i,q,a[n],sum[n]={0};
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i!=0){
        	sum[i]=sum[i-1]+a[i];
		}else{
			sum[i]=a[i];
		}
    }
    cin>>q;
    long long b,c,y[q];
    for(i=0;i<q;i++){
        cin>>b>>c;
        if(b>c){
        	swap(b,c);
		}
        if(b==1){
        	y[i]=sum[c-1];
		}else{
			y[i]=sum[c-1]-sum[b-2];
		}
	}
    for(i=0;i<q;i++){
        cout<<y[i]<<"\n";
    }
    return 0;
}
