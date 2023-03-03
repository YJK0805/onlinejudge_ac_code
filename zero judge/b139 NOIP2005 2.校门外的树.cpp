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
len len[110];
long long M,L,r,l,ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>L>>M;
	for(int i=0;i<M;i++){
		cin>>len[i].l>>len[i].r;
	}
	sort(len,len+M,cmp);
	r=0,l=0,ans=0;
	for(int i=0;i<M;i++){
		if(r==0&&l==0){
			r=len[0].r;
			l=len[0].l;
		}else if(len[i].l<=r&&len[i].r>=r){
			r=len[i].r;
		}else if(len[i].l>r){
			ans+=(r-l+1);
			r=len[i].r;
			l=len[i].l;
		}
	}
	ans+=(r-l+1);
	cout<<L-ans+1<<"\n";
	return 0;
}
