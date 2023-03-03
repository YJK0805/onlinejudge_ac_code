#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	long long a[1010],count=0;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	if(n%2){
		cout<<"still running\n";
	}else{
		for(long long i=1;i<n;i+=2){
			count+=(a[i]-a[i-1]);
		}
		cout<<count<<"\n";
	}
	return 0;
}
