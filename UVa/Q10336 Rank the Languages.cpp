#include <bits/stdc++.h>
using namespace std;
long long h,w,used[10010][10010],d[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
char m[10010][10010];
struct NUM{
	int amo;
	char c;
};
void dfs(int x,int y){
	used[x][y] = 1;
	for(int i = 0;i < 4;i++){
		if(x + d[i][0] >= 0 && x + d[i][0] < h && y + d[i][1] >= 0 && y + d[i][1] < w){
			if(m[x + d[i][0]][y + d[i][1]] == m[x][y] && !used[x + d[i][0]][y + d[i][1]]){
				used[x + d[i][0]][y + d[i][1]] = 1;
				dfs(x + d[i][0],y + d[i][1]);
			}
		}
	}
}
bool cmp(NUM a,NUM b){
	if(a.amo != b.amo){
		return a.amo > b.amo;
	}else{
		return a.c < b.c;
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    for(int times = 1;times <= t;times++){
    	cin >> h >> w;
    	for(int i = 0;i < 10010;i++){
    		for(int j = 0;j < 10010;j++){
    			used[i][j] = 0;
    		}
    	}
    	NUM ans[128];
    	for(int i = 0;i < 128;i++){
    		ans[i].amo = 0;
    		ans[i].c = char(i);
    	}
    	for(int i = 0;i < h;i++){
    		for(int j = 0;j < w;j++){
    			cin >> m[i][j];
    		}
    	}
    	for(int i = 0;i < h;i++){
    		for(int j = 0;j < w;j++){
    			if(!used[i][j]){
    				ans[m[i][j]].amo++;
    				dfs(i,j);
    			}
    		}
    	}
    	sort(ans,ans + 128,cmp);
    	cout <<"World #" << times <<"\n";
    	for(int i = 0;i < 128;i++){
    		if(ans[i].amo){
    			cout << ans[i].c <<": "<< ans[i].amo <<"\n";
    		}else{
    			break;
    		}
    	}
    }
    return 0;
}
