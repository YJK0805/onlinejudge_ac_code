#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,k;
	cin>>n>>k;
	vector<long long> score(n);
	for(long long i=0;i<n;i++){
		cin>>score[i];
	}
	if(k>=n){
		cout<<"YES\n";
	}else if(score[k-1]==score[k]){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}
	return 0;
}
