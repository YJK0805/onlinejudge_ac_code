#include <bits/stdc++.h>
using namespace std;
long long s[510];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	while(n--){
		long long r;
		cin>>r;
		for(int i=0;i<r;i++){
			cin>>s[i];
		}
		sort(s,s+r);
		long long x;
		if(r%2==0){
			x=(s[r/2]+s[r/2-1])/2;
		}else{
			x=s[r/2];
		}
		long long ans=0;
		for(int i=0;i<r;i++){
			ans+=(abs(s[i]-x));
		}
		cout<<ans<<"\n";
	}
	return 0;
}
