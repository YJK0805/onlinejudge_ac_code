#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,a,b;
    cin>>n;
    while(n--){
    	cin>>a>>b;
    	a=pow(a,b);
    	cout<<a<<"\n";
	}
    return 0;
}

