#include <bits/stdc++.h>
using namespace std;
struct len{
	long long l;
	long long r;
}; 
bool cmp(len a,len b){
	if(a.l!=b.l){
		return a.l<b.l;
	}else{
		return a.r<b.r;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	len len[n];
	for(int i=0;i<n;i++){
		cin>>len[i].l>>len[i].r;
	}
	sort(len,len+n,cmp);
	long long r=0,l=0,ans=0;
	for(int i=0;i<n;i++){
		if(r==0&&l==0){
			r=len[0].r;
			l=len[0].l;
		}else if(len[i].l<=r&&len[i].r>=r){
			r=len[i].r;
		}else if(len[i].l>r){
			ans+=(r-l);
			r=len[i].r;
			l=len[i].l;
		}
	}
	ans+=(r-l);
	cout<<ans<<"\n";
	return 0;
}
