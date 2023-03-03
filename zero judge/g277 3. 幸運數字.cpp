#include <bits/stdc++.h>
using namespace std;
pair<long long,long long> a[300005];
long long cnt[300005],v[300005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i];
		if(i){
			cnt[i]=cnt[i-1]+v[i];
		}else{
			cnt[i]=v[i];
		}
		a[i]={v[i],i};
	}
	sort(a,a+n);
	long long l=1,r=n,i=0;
	while(l!=r){
		long long lsum,rsum;
		while(a[i].second<l||a[i].second>r){
			i++;
		}
		lsum=cnt[a[i].second-1]-cnt[l-1];
		rsum=cnt[r]-cnt[a[i].second];
		if(rsum>=lsum){
			l=a[i].second+1;
		}else{
			r=a[i].second-1;
		}
	} 
	cout<<v[r]<<"\n";
	return 0;
}
