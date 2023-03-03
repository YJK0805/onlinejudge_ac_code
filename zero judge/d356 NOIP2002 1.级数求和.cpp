#include <bits/stdc++.h>
using namespace std;
int k,i;
double sn;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>k;
	sn=0;
	for(i=1;sn<=k;i++){
		sn+=(1.0/i);
	}
	cout<<i-1<<"\n";
	return 0;
}
