#include <bits/stdc++.h>
using namespace std;
int apple[10],h,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<10;i++){
		cin>>apple[i];
	}
	cin>>h;
	h+=30;
	ans=0;
	for(int i=0;i<10;i++){
		if(apple[i]<=h){
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
