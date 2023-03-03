#include <bits/stdc++.h>
using namespace std;
long long amo,n,score;
double ave;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		amo=0;
		for(int i=0;i<n;i++){
			cin>>score;
			amo+=score;
		}
		ave=amo*1.0/n;
		if(ave>59){
			cout<<"no\n";
		}else{
			cout<<"yes\n";
		}
	}
	return 0;
}
