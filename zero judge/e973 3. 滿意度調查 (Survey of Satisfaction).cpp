#include <bits/stdc++.h>
using namespace std;
struct time{
	long long id;
	long long a;
};
bool cmp(struct time a,struct time b){
	if(a.a==b.a){
		return a.id<b.id;
	}else{
		return a.a>b.a;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	getline(cin,s);
	struct time su[10];
	for(int i=0;i<10;i++){
		su[i].id=i;
		su[i].a=0;
	}
	for(int i=0;i<s.size();i++){
		su[s[i]-'0'].a++;
	}
	sort(su,su+10,cmp);
	for(int i=0;i<10;i++){
		if(su[i].a){
			cout<<su[i].id<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
