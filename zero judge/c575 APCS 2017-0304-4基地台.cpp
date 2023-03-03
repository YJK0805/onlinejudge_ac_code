#include <bits/stdc++.h>
using namespace std;
long long n,k,p[50100],Min,Max;
int binary_search(long long l,long long r,long long t){
	while(l!=r){
		long long mid=(l+r)/2,a=0;
		for(long long i=0,now=0;i<n;){
			while(p[now]<=p[i]+mid&&now<n){
				now++;
			}
			a++;
			i=now;
		}
		if(a>t){
			l=mid+1;
		}else{
			r=mid;
		}
	}
	return l;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>k){
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		sort(p,p+n);
		Min=1;
		Max=(p[n-1]-p[0])/k+1;
		cout<<binary_search(Min,Max,k)<<"\n";
	}
	return 0;
}
