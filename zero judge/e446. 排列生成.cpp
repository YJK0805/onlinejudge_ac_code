#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 1;i <= n;i++){
    	v.emplace_back(i);
    }
    do{
    	for(auto &i : v){
    		cout << i << " ";
    	}
    	cout << "\n";
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}
