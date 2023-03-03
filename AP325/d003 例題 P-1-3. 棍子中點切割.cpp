#include <bits/stdc++.h>
using namespace std;
long long p[60000];
long long cut(int left, int right) {
	if (right-left<=1){
		return 0;
	}
	long long k=(p[right]+p[left])/2;
	int m=lower_bound(p+left,p+right,k)-p;
	if (p[m-1]-p[left]>=p[right]-p[m]){
		m--;
	}
	return p[right]-p[left]+cut(left, m)+cut(m, right);
}
int main(){
	long long n,l;
	cin>>n>>l;
	p[0]=0;
	p[n+1]=l;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	long long ans=cut(0,n+1);
	cout<<ans<<"\n";
	return 0;
}
