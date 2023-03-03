#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long k;
    cin >> k;
    long long score = 0,max_score = -1,error = 0,t,s,max_score_time = -1;
    for(int i = 0;i < k;i++){
    	cin >> t >> s;
    	if(s > max_score){
    		max_score = s;
    		max_score_time = t;
    	}
    	if(s == -1){
    		error++;
    	}
    }
    long long ans = max_score - k - (error * 2);
    cout << max((int)ans,(int)0) << " " << max_score_time <<"\n";
    return 0;
}
