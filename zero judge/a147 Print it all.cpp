#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n&&n){
		for(int i=1;i<n;i++){
			if(i%7){
				cout<<i<<" ";
			} 
		}
		cout<<"\n";
	}
	return 0;
}
