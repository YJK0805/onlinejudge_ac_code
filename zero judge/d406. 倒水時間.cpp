#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t = 1,s,d[4][2] = {{0,1},{0,-1},{1,0},{-1,0}},num[3] = {0,4,3};
    while(cin >> s){
    	cout << "Case " << t++ << ":\n";
    	long long n,m;
    	cin >> n >> m;
    	vector<vector<int>> mp(n,vector<int>(m)),ans(n,vector<int>(m,0));
    	queue<pair<int,int>> q;
    	for(int i = 0;i < n;i++){
    		for(int j = 0;j < m;j++){
    			cin >> mp[i][j];
    		}
    	}
    	for(int i = 0;i < m;i++){
    		if(mp[0][i]){
    			q.emplace(make_pair(0,i));
    			ans[0][i] = 1;
    			break;
    		}
    	}
    	while(!q.empty()){
    		pair<int,int> p = q.front();
    		q.pop();
    		for(int i = 0;i < num[s];i++){
    			int xx = p.first + d[i][0],yy = p.second + d[i][1];
    			if(xx >= 0 && xx < n && yy >= 0 && yy < m && mp[xx][yy] && !ans[xx][yy]){
    				ans[xx][yy] = ans[p.first][p.second] + 1;
    				q.emplace(make_pair(xx,yy));
    			}
    		}
    	}
    	for(int i = 0;i < n;i++){
    		for(int j = 0;j < m;j++){
    			cout << ans[i][j] << " ";
    		}
    		cout << "\n";
    	}
    }
    return 0;
}
