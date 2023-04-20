#include <bits/stdc++.h>
using namespace std;
long long num[10001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	long long n,j=0,time[10001];
	while(cin>>n){
        long long f=0,i;
        for(i=0;i<j;i++){
            if(n==num[i]){
                f=1;
                time[i]++;
                break;
            }
        }
        if(f==0){
            num[i]=n;
            time[i]=1;
            j++;
        }
	}
	for(int i=0;i<j;i++){
        cout<<num[i]<<" "<<time[i]<<"\n";
	}
	return 0;
}
