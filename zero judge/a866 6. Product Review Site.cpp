#include <bits/stdc++.h>
using namespace std;
int n,a[5]={0},num=0,x=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n&&n){
		a[n-1]++;
		num++;
	}
	for(int i=4;i>=0;i--){
		x+=(a[i]*(i+1));
		cout<<i+1<<" ("<<setw(2)<<a[i]<<") |";
		for(int j=0;j<a[i];j++){
			cout<<"=";
		}
		cout<<"\n";
	}
	double ans=x*1.0/num;
	cout<<"Average rating: "<<fixed<<setprecision(4)<<ans<<"\n"; 
	return 0;
}
