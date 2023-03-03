#include <bits/stdc++.h>
using namespace std;
long long ans[10][2],n,a[10][2],aa[10][2];
bool u[20];
double m;
void dfs(int d){
	if(d==n){
		double len=0;
		for(int i=1;i<n;i++){
			len+=sqrt(pow(aa[i][0]-aa[i-1][0],2)+pow(aa[i][1]-aa[i-1][1],2));
		}
		if(len<m){
			m=len;
			for(int i=0;i<n;i++){
				ans[i][0]=aa[i][0];
				ans[i][1]=aa[i][1];
			}
		}
		return;
	}
	for(int i=0;i<n;i++){
		if(!u[i]){
			u[i]=true;
			aa[d][0]=a[i][0];
			aa[d][1]=a[i][1];
			dfs(d+1);
			u[i]=false;
		}
	}
}
int main(){
	long long t=1;
	while(cin>>n&&n){
		m=3000000000000;
		for(int i=0;i<n;i++){
			cin>>a[i][0]>>a[i][1];
		}
		dfs(0);
		cout<<"**********************************************************\nNetwork #"<<t++<<"\n";
		for(int i=1;i<n;i++){
			double len=sqrt(pow(ans[i-1][0]-ans[i][0],2)+pow(ans[i-1][1]-ans[i][1],2));
			cout<<fixed<<setprecision(2)<<"Cable requirement to connect ("<<ans[i-1][0]<<","<<ans[i-1][1]<<") to ("<<ans[i][0]<<","<<ans[i][1]<<") is "<<len+16<<" feet.\n";
		}
		cout<<"Number of feet of cable required is "<<m+(n-1)*16<<".\n";
	}
	return 0;
}
