#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long p;
	while(cin>>p){
		for(int i=0;i<p;i++){
			for(int j=p-1;j>i;j--){
				cout<<" ";
			}
			for(int j=0;j<=i;j++){
				cout<<char('A'+j);
			}
			for(int j=i-1;j>=0;j--){
				cout<<char('A'+j);
			}
			cout<<"\n";
		}
		for(int i=p-1;i>0;i--){
			for(int j=i;j<=p-1;j++){
				cout<<" ";
			}
			for(int j=0;j<i-1;j++){
				cout<<char('A'+j);
			}
			for(int j=i-1;j>=0;j--){
				cout<<char('A'+j);
			}
			cout<<"\n";
		}
	}
	return 0;
}
