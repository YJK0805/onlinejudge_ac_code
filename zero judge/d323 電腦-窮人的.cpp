#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	vector <long long> v;
	long long n;
	cin>>n;
	long long a;
	while(n--){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
