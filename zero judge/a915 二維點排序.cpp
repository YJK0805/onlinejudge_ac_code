#include <bits/stdc++.h>
using namespace std;
struct num{
	long long x,y;
};
num a[1010];
bool cmp(num a,num b){
	if(a.x!=b.x){
		return a.x<b.x;
	}else{
		return a.y<b.y;
	} 
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].x>>a[i].y;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i].x<<" "<<a[i].y<<"\n";
	} 
	return 0;
}
