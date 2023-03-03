#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long i,s[n];
		for(i=0;i<4;i++){
			cin>>s[i];
		}
		while(i!=n+1){
			s[i]=s[i-4]+s[i-1];
			i++;
		}
		sort(s,s+i);
		n/=2;
		cout<<s[n]<<"\n";
	}
	return 0;
}
