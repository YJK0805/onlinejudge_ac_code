#include <bits/stdc++.h>
using namespace std;
struct game{
	int win,num,rank;
};
game pla[105];
int n,a,b,p,q;
bool cmp(game a,game b){
	if(a.win!=b.win){
		return a.win>b.win;
	}else{
		return a.num<b.num;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		pla[i].num=i+1;
		pla[i].win=0;
	}
	for(int i=0;i<((n*(n-1))/2);i++){
		cin>>a>>b>>p>>q;
		pla[a-1].win+=p;
		pla[b-1].win+=q;
	}
	sort(pla,pla+n,cmp);
	for(int i=0;i<n;i++){
		if(i!=0){
			if(pla[i].win==pla[i-1].win){
				pla[i].rank=pla[i-1].rank;
			}else{
				pla[i].rank=i+1;
			}
		}else{
			pla[i].rank=i+1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<pla[i].rank<<" "<<pla[i].num<<"\n";
	}
	return 0;
}
