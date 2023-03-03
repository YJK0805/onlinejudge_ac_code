#include <iostream>
using namespace std;
int main(){
    long long ans=0;
    for(int i=1;i<=30;i++){
        ans+=1;
        ans+=i;
        ans+=(i+1)*i/2*i;
    }
    cout<<ans<<"\n";
    return 0;
}
