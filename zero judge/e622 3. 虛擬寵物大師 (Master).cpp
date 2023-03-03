#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i,n,star,level,max=0,ans=0;
    cin>>n>>star;
    level=star/1000;
    long long cp[n+1],iv[n+1]={0},maxcp[n+1]={0};
    for(i=1;i<=n;i++){
        cin>>cp[i]>>iv[i];
        if(iv[i]>=0&&iv[i]<=29){
            maxcp[i]=level*10+cp[i];
        }else if(iv[i]>=30&&iv[i]<=39){
            maxcp[i]=level*50+cp[i];
        }else if(iv[i]>=40&&iv[i]<=45){
            maxcp[i]=level*100+cp[i];
        }
    }
    for(i=1;i<=n;i++){
        if(maxcp[i]>max){
            max=maxcp[i];
            ans=i;
        }
    }
    cout<<ans<<" "<<max<<endl;
	return 0;
}
