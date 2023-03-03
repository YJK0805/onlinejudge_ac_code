#include <bits/stdc++.h>
using namespace std;
int s,a[3],ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	s=0;
	for(int i=0;i<3;i++){
		cin>>a[i];
		s+=a[i];
	}
	s/=2;
	ans=s*(s-a[0])*(s-a[1])*(s-a[2]);
	cout<<ans<<"\n";
	return 0;
}
