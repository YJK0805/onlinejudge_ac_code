// Problem: Prva
// Contest: Kattis
// URL: https://open.kattis.com/problems/prva
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
char a[25][25];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	vector<string> v;
	long long count=0;
	string s="";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]!='#'){
				s+=a[i][j];
				count++;
			}else{
				if(count>=2){
					v.emplace_back(s);
				}
				count=0;
				s="";
			}
		}
		if(count>=2){
			v.emplace_back(s);
		}
		count=0;
		s="";
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			if(a[j][i]!='#'){
				s+=a[j][i];
				count++;
			}else{
				if(count>=2){
					v.emplace_back(s);
				}
				count=0;
				s="";
			}
		}
		if(count>=2){
			v.emplace_back(s);
		}
		count=0;
		s="";
	}
	sort(v.begin(),v.end());
	cout<<v[0]<<"\n";
	return 0;
}
