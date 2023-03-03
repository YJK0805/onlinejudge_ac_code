#include<bits/stdc++.h>
using namespace std;
struct str{
	long long id;
	string s;
};
bool cmp(str a,str b){
	if(a.s[0]==b.s[0]){
		if(a.s[1]==b.s[1]){
			return a.id<b.id;
		}else{
			return a.s[1]<b.s[1];
		}
	}else{
		return a.s[0]<b.s[0];
	}
}
int main() {
	long long n;
	while(cin>>n&&n){
		str s[n];
		for(int i=0;i<n;i++){
			s[i].id=i;
			cin>>s[i].s;
		}
		sort(s,s+n,cmp);
		for(int i=0;i<n;i++){
			cout<<s[i].s<<"\n";
		}
	}
	return 0;
}

