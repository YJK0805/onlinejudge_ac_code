#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin >> n >> m;
    vector<vector<long long>> x(n,vector<long long>(m));
    for(int i = 0;i < n;i++){
    	for(int j = 0;j < m;j++){
    		cin >> x[i][j];
    	}
    }
    vector<long long> choose;
    long long S = 0;
    for(int i = 0;i < n;i++){
    	long long num = *max_element(x[i].begin(),x[i].end());
    	choose.emplace_back(num);
    	S += num;
    }
    cout << S << "\n";
    long long f = 0;
    for(auto &i : choose){
    	if(S % i == 0){
    		if(f){
    			cout << " " << i;
    		}else{
	    		cout << i;
	    		f = 1;
	    	}
    	}
    }
    if(!f){
    	cout << "-1\n";
    }else{
    	cout << "\n";
    }
    return 0;
}
