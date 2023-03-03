#include <bits/stdc++.h>
using namespace std;
struct st{
	int aca,id;
	string name;
};
int n;
st stu[105];
bool cmp(st a,st b){
	if(a.aca!=b.aca){
		return a.aca<b.aca;
	}else{
		return a.id<b.id;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s>>stu[i].name;
		stu[i].aca=s[8];
		stu[i].id=s[0];
	}
	stable_sort(stu,stu+n,cmp);
	for(int i=0;i<n;i++){
		cout<<char(stu[i].aca)<<": "<<stu[i].name<<"\n";
	}
	return 0;
}
