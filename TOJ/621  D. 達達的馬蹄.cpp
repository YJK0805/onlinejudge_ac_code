#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long t,n,m;
	char c;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long x=0,y=0;
		for(long long i=1;i<=n;i++){
			for(long long j=1;j<=m;j++){
				cin>>c;
				if(c=='*'){
					x=i,y=j;
				}
			}
		}
		if(x){
			cout<<x<<" "<<y<<"\n";
		}else{
			cout<<"I CAN'T FIND IT QQ\n";
		}
	}
	return 0;
}
