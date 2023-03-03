#include <bits/stdc++.h>
using namespace std;
struct animal{
	int h,w,a;
};
animal lion[2005];
bool cmp(animal a,animal b){
	return a.a<b.a;
}
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>lion[i].h;
	}
	for(int i=0;i<n;i++){
		cin>>lion[i].w;
		lion[i].a=lion[i].w*lion[i].h;
	}
	sort(lion,lion+n,cmp);
	cout<<lion[0].h<<" "<<lion[0].w<<"\n";
	return 0;
}
