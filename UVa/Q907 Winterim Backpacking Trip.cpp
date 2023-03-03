#include <bits/stdc++.h>
using namespace std;
int n,k,dis[610],Min,Max;
int binary_search(int l,int r,int t){
	while(l!=r){
		int discheck=0,day=0,mid=(l+r)/2;
		for(int i=0;i<=n;i++){
			if(discheck+dis[i]>mid){
				day++;
				discheck=dis[i];
			}else{
				discheck+=dis[i];
			}
		}
		if(discheck>0){
			day++;
		}
		if(day-1>t){
			l=1+mid;
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
		Max=0,Min=0;
		for(int i=0;i<=n;i++){
			cin>>dis[i];
			Min=max(Min,dis[i]);
			Max+=dis[i];
		}
		cout<<binary_search(Min,Max,k)<<"\n"; 
	}
	return 0;
}
