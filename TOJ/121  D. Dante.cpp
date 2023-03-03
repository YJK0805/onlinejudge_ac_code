#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,s,j,i,blank=0;
	cin>>n;
	s=2*n-1;
	for(i=n,j=s;i>=1;i--,s-=2){
		long long k=s;
		for(int l=0;l<blank;l++){
			cout<<" ";
		}
		while(k--){
			cout<<(char)('A'+i-1);
		}
		cout<<"\n";
		blank+=1;
	}
	return 0;
}
