#include<bits/stdc++.h>
using namespace std;
long long a[200100];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long m;
    cin>>m;
    for(int i=0;i<m;i++){
        long long p,q;
        cin>>p>>q;
        long long x=lower_bound(a,a+n,p)-a,y=upper_bound(a,a+n,q)-a;
        y-=x; 
		y*=100;
        cout<<fixed<<setprecision(k)<<1.0*y/n<<"%\n";
    }
    return 0;
}
