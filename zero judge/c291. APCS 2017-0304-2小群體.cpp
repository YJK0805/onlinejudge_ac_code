#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
    	cin >> arr[i];
    }
    vector<bool> vis(n,false);
    long long ans = 0;
    for(int i = 0;i < n;i++){
    	if(vis[i]){
    		continue;
    	}
    	ans += 1;
    	vis[i] = true;
    	long long p = arr[i];
    	while(p != i){
    		vis[p] = true;
    		p = arr[p];
    	}
    }
    cout << ans << "\n";
    return 0;
}
