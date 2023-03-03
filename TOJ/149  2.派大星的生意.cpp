#include <bits/stdc++.h>
using namespace std;
struct loli{
	long long be;
	long long af;
};
bool cmp(loli a,loli b){
	if(a.be==b.be){
		return a.af<b.af;
	}else{
		return b.be>a.be;
	}
}
int main(){
	long long n,m;
	cin>>n>>m;
	struct loli ll[n];
	for(int i=0;i<n;i++){
		cin>>ll[i].be>>ll[i].af;
	}
	sort(ll,ll+n,cmp);
	for(int i=0;i<n;i++){
		if(m>=ll[i].be){
			m+=(ll[i].af-ll[i].be);
		}else{
			break;
		}
	}
	cout<<m<<"\n";
	return 0;
}
