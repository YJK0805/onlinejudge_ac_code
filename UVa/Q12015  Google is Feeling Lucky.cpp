#include <bits/stdc++.h>
using namespace std;
struct Google{
	string s;
	int val;
};
int t;
Google site[15];
bool cmp(Google a,Google b){
	return a.val>b.val;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	for(int time=1;time<=t;time++){
		for(int i=0;i<10;i++){
			cin>>site[i].s>>site[i].val; 
		}
		stable_sort(site,site+10,cmp);
		int check=site[0].val;
		cout<<"Case #"<<time<<":\n";
		for(int i=0;site[i].val==site[0].val;i++){
			cout<<site[i].s<<"\n";
		}
	}
	return 0;
}
