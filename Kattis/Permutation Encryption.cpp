// Problem: Permutation Encryption
// Contest: Kattis
// URL: https://open.kattis.com/problems/permutationencryption
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		long long n;
		cin>>n;
		if(n==0){
			break;
		}
		vector<long long> p(n);
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		cin.ignore();
		string s;
		getline(cin,s);
		long long re=s.size()%n;
		if(re){
			s.append(n-re,' ');
		}
		cout<<"'";
		for(int i=0;i<s.size()/n;i++){
			for(int j=0;j<n;j++){
				cout<<s[i*n+p[j]-1];
			}
		}
		cout<<"'\n";
	}
	return 0;
}
