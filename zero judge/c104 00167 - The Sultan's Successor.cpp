#include<bits/stdc++.h>
using namespace std;
int a[15][15],ans=0,total=0,p_x[8],p_y[8];
void dfs(int depth){
	if(depth==8){
		total=0;
		for(int i=0;i<8;i++){
			total+=a[p_x[i]][p_y[i]];
		}
		ans=max(total,ans);
		return;
	}
	for(int i=0;i<8;i++){
		bool c=true;
		for(int j=0;j<depth;j++){
			if(p_y[j]==i){
				c=false;
				break;
			}
			if(abs(p_x[j]-depth)==abs(p_y[j]-i)){
				c=false;
				break;
			}
		}
		if(c){
			p_x[depth]=depth;
			p_y[depth]=i;
			dfs(depth+1);
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ans=0;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>a[i][j];
			}
		}
		dfs(0);
		cout<<setw(5)<<ans<<"\n";
	}
	return 0;
}

