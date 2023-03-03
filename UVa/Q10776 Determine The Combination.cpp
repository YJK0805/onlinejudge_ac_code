#include <bits/stdc++.h>
using namespace std;
string s;
long long r;
char c[101],l[101];
void dfs(int d,int st){
	if(d==r){
		strcpy(l,c);
		cout<<c[0];
		for(int i=1;i<r;i++){
			cout<<c[i];
		}
		cout<<"\n";
		return;
	}
	for(int i=st;i<s.size();i++){
		c[d]=s[i];
		int f=1;
		for(int j=0;j<=d;j++){
			if(c[j]!=l[j]){
				f=0;
				break;
			}
		}
		if(!f){
			dfs(d+1,i+1);
		}
	}
	return;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin>>s>>r){
		memset(l,' ',101);
		sort(s.begin(),s.end());
		dfs(0,0);
	}
	
	return 0;
}
