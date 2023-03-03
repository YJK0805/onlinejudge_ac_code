#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,b=1;
	while(cin>>n){
		if(n!=0){
		long long i,ans=0,x,sum=0,a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		x=sum/n;
		for(i=0;i<n;i++){
			if(x<a[i]){
				ans+=(a[i]-x);
			}
		}
		cout<<"Set #"<<b<<"\nThe minimum number of moves is "<<ans<<".\n\n";
		b++;
		}else{
			return 0;
		}
	}
	return 0;
}
