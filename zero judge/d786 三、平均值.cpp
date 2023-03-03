#include <bits/stdc++.h>
using namespace std;
int n,sum,t,num;
double ave;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>num;
			sum+=num;
		}
		ave=sum*1.0/n;
		cout<<fixed<<setprecision(2)<<ave<<"\n";
	}
	return 0;
}
