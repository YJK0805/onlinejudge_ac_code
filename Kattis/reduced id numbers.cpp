// Problem: Reduced ID Numbers
// Contest: Kattis
// URL: https://open.kattis.com/problems/reducedidnumbers
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long i,g;
	cin>>g;
	vector<long long> sin(g),ta(1000010);
	for(i=0;i<g;i++){
		cin>>sin[i];
	}
	long long f,j;
	for(i=1;i<1000010;i++){
		for(j=0;j<i-1;j++){
			ta[j]=0;
		}
		f=1;
		for(j=0;j<g;j++){
			if(ta[sin[j]%i]){
				f=0;
				break;
			}else{
				ta[sin[j]%i]=1;
			}
		}
		if(f){
			break;
		}
	}
	cout<<i<<"\n";
	return 0;
}
