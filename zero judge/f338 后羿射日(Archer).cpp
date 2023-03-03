#include <bits/stdc++.h>
using namespace std;
int x,y,l,r,sx,sy,sl,sr,n,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>x>>y>>l>>r;
	cin>>n;
	ans=0;
	for(int i=0;i<n;i++){
		cin>>sx>>sy>>sl;
		if(l>=sl&&sqrt(pow((sx-x),2)+pow((sy-y),2))<=r){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
