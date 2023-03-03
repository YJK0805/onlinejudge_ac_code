#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	while(cin>>n){
		string s;
		for(int i=1;i<=n;i++){
			s+=char(i+'0');
		}
		vector<string> ans;
		do{
			ans.push_back(s);
		}while(next_permutation(s.begin(),s.end()));
		reverse(ans.begin(),ans.end());
		for(auto i:ans){
			cout<<i<<"\n";
		}
	}
	return 0;
}
