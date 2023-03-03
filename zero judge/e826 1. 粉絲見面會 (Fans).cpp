#include <bits/stdc++.h>
using namespace std;
int n,m;
struct people{
	int id,val;
};
people fan[100010];
bool cmp(people a,people b){
	if(a.val!=b.val){
		return a.val>b.val;
	}else{
		return a.id<b.id;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n>>m){
		for(int i=0;i<n;i++){
			fan[i].id=i;
			fan[i].val=0;
		}
		int idd,x;
		for(int i=0;i<m;i++){
			cin>>idd>>x;
			fan[idd].val+=x;
		}
		sort(fan,fan+n,cmp);
		for(int i=0;i<n;i++){
			cout<<fan[i].id<<" "<<fan[i].val<<"\n";
		}
	}
	return 0;
}
