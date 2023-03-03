#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	set <long long> s;
	long long n,l;
	cin>>n>>l;
	s.insert(l);
	s.insert(0);
	long long c,t,cut[n+1];
	for(int i=0;i<n;i++){
		cin>>c>>t;
		cut[t]=c;	
	}
	long long f,b,ans=0;
	for(int i=1;i<=n;i++){
		f=*s.upper_bound(cut[i]);
		b=*(--s.lower_bound(cut[i]));
		s.insert(cut[i]);
		ans+=f-b;
	}
	cout<<ans<<"\n";
	return 0;
}
