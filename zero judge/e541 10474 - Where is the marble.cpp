#include <bits/stdc++.h>
using namespace std;
int b[10100];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,q,t=1,x;
	while(cin>>n>>q&&n&&q){
		cout<<"CASE# "<<t<<":\n";
		t++;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b,b+n);
		for(int i=0;i<q;i++){
			cin>>x;
			int ans=lower_bound(b,b+n,x)-b;
			if(b[ans]==x){
				cout<<x<<" found at "<<ans+1<<"\n";
			}else{
				cout<<x<<" not found\n";
			}
		}
	}
	return 0;
}
