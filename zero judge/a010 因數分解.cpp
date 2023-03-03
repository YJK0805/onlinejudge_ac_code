#include <bits/stdc++.h>
using namespace std;
long long n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	int t=0;
	for(int i=n,j=2;i!=1;j++){
		int count=0;
		while(i%j==0){
			i/=j;
			count++;
		}
		if(count){
			if(t){
				cout<<" * ";
			}else{
				t++;
			}
			if(count>1){
				cout<<j<<"^"<<count;
			}else{
				cout<<j;
			}
		}
	}
	cout<<"\n";
	return 0;
}
