#include <bits/stdc++.h>
using namespace std;
int n,N[30010],ma,cnum;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<=30000;i++){
		N[i]=0;
	}
	cin>>n;
	ma=0;
	for(int i=0;i<n;i++){
		cin>>cnum;
		N[cnum]++;
		ma=max(N[cnum],ma);
	}
	for(int i=1;i<=30000;i++){
		if(N[i]==ma){
			cout<<i<<" "<<N[i]<<"\n";
		}
	}
	return 0;
}
