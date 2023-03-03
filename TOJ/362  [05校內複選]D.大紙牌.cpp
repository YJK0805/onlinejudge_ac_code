#include<bits/stdc++.h>
using namespace std;
int card[6][15],top[6];
bool found=false,ans=false;
void dfs(int depth){
	if(depth==26){
		found=true;
		ans=true;
		return;
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4&&!found;j++){
			if(top[i]<13&&top[j]<13&&card[i][top[i]]==card[j][top[j]]){
				top[i]++;
				top[j]++;
				dfs(depth+1);
				top[i]--;
				top[j]--;
			}
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<4;i++){
		top[i]=0;
		for(int j=0;j<13;j++){
			cin>>card[i][j];
		}
	}
	dfs(0);
	if(ans){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}

