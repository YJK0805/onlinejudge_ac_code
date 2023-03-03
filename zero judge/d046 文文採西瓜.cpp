#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,w,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w;
        if(w<=10){
            a++;
        }
    }
    cout<<a<<endl;
	return 0;
}
