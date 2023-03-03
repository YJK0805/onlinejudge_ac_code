#include <bits/stdc++.h>
using namespace std;
long long n,k,m,a[100100],b[100100],Min=0,Max=1000000000;
int binary_search(long long l,long long r,long long t){
	while(l!=r){
		long long mid=(l+r)/2,check,c=0;
		for(int i=0;i<n;i++){
			check=k-a[i]*mid;
			if(check>0){
				c+=check/b[i];
				if(check%b[i]!=0){
					c++;
				}
			}
		}
		if(c>t){
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
	cin>>n>>k>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		Max=min(Max,a[i]);
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	Max=k/Max+1;
	cout<<binary_search(Min,Max,m)<<"\n";
	return 0;
}
