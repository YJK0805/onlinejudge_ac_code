#include <bits/stdc++.h>
using namespace std;
int n,r,ans,maxtime;
struct num{
	int val,amount,f;
};
bool cmp(num a,num b){
	if(a.amount!=b.amount){
		return a.amount>b.amount;
	}else{
		return a.f<b.f;
	}
}
num rr[20010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	maxtime=1;
	ans=0;
	for(int i=0;i<20010;i++){
		rr[i].amount=0;
	}
	for(int i=0;i<n;i++){
		cin>>r;
		if(rr[r+9999].amount==0){
			ans++;
			rr[r+9999].f=i;
			rr[r+9999].val=r;
		}
		rr[r+9999].amount++;
		if(rr[r+9999].amount>maxtime){
			maxtime=rr[r+9999].amount;
		}
	}
	cout<<ans<<"\n";
	sort(rr,rr+20010,cmp);
	if(maxtime!=1){
		for(int i=0;i<20010;i++){
			if(rr[i].amount==maxtime){
				cout<<rr[i].val<<" ";
			}else{
				break;
			}
		}
		cout<<"\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}
