#include <bits/stdc++.h>
using namespace std;
int n,a,f;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>a>>f;
		for(int k=0;k<f;k++){
			for(int i=0;i<a;i++){
				for(int j=0;j<i;j++){
					cout<<i;
				}
				cout<<"\n";
			}
			for(int i=a;i>0;i--){
				for(int j=0;j<i;j++){
					cout<<i;
				}
				cout<<"\n";
			}
		}
	}
	return 0;
}
