#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    while(cin >> n >> m){
	    vector<vector<long long>> v(n + 1,vector<long long>());
	    vector<bool> vis(n + 1,false);
	    long long a,b;
	    for(int i = 0;i < m;i++){
	    	cin >> a >> b;
	    	if(a == b){
	    		continue;
	    	}
	    	v[a].emplace_back(b);
	    }
	    cin >> a >> b;
	    queue<long long> q;
	    q.emplace(a);
	    vis[a] = true;
	    while(!q.empty()){
	    	long long num = q.front();
	    	q.pop();
	    	for(long long i : v[num]){
	    		if(!vis[i]){
	    			vis[i] = true;
	    			q.emplace(i);
	    		}
	    		if(vis[b]){
	    			break;
	    		}
	    	}
	    }
	    if(vis[b] == 1){
	    	cout << "Yes!!!\n";
	    }else{
	    	cout << "No!!!\n";
	    }
	}
    return 0;
}
