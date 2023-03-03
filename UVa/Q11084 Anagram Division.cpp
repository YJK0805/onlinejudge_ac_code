#include<bits/stdc++.h>
using namespace std;
string s;
int n,t;
long long ans;
bool used[15];
void dfs(int depth,string r){
	if(depth==n){
		long long num=0;
		for(int i=0;i<n;i++){
			num*=10;
			num+=(r[i]-'0');
		}
		if(num%t==0){
			ans++;
			return;
		}
	}
	bool n_used[15];
	for(int i=0;i<15;i++){
		n_used[i]=false;
	}
	for(int i=0;i<n;i++){
		if(!used[i]&&!n_used[s[i]-'0']){
			used[i]=true;
			n_used[s[i]-'0']=true;
			dfs(depth+1,r+s[i]);
			used[i]=false;
		}
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		cin>>s>>t;
		for(int i=0;i<15;i++){
			used[i]=false;
		}
		ans=0;
		n=s.size();
		dfs(0,"");
		cout<<ans<<"\n";
	}
	return 0;
}
