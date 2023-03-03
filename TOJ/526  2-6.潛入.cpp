#include <iostream>
using namespace std;
int main(){
    int n,a1,a2,a3;
    cin>>n;
    a1=n/100;
    n%=100;
    a2=n/10;
    n%=10;
    a3=n;
    n=a1+a2*10+a3*100;
    cout<<n<<"\n";
    return 0;
}
