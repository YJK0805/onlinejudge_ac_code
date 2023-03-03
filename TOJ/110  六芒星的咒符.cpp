#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	long long n;
	cin>>n;
	while(n--){
		long long t;
		cin>>t;
		for(int i=1,j=t-1,k=1;i<=t-3;i++,j--,k+=2){
			for(int l=1;l<=j;l++){
				cout<<" ";
			}
			for(int l=1;l<=k;l++){
				cout<<"*";
			}
			cout<<"\n";
		}
		for(int i=1;i<=2*t-1;i++){
			cout<<"*";
		}
		cout<<"\n";
		cout<<" ";
		for(int i=1;i<=2*t-3;i++){
			cout<<"*";
		}
		cout<<"\n";
		for(int i=1;i<=2*t-1;i++){
			cout<<"*";
		}
		cout<<"\n";
		for(int i=1,j=3,k=2*t-7;i<=t-3;i++,j++,k-=2){
			for(int l=1;l<=j;l++){
				cout<<" ";
			}
			for(int l=1;l<=k;l++){
				cout<<"*";
			}
			cout<<"\n";
		}
	}
	return 0;
}
