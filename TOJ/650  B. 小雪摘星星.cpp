#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=n;j>i+1;j--){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<char('A'+k);
		}
		cout<<"\n";
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n;j>i+1;j--){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<char('A'+k);
		}
		cout<<"\n";
	}
	return 0;
}
