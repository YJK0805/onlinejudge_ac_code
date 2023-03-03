#include <bits/stdc++.h>
using namespace std;
string so,s;
long long n,c,num[128]={0};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>so>>s;
	for(int i=0;i<s.size();i++){
		num[s[i]]++;
	}
	cin>>n;
	while(n--){
		cin>>c;
		long long a=0,i=-1;
		while(a<c){
			i++;
			a+=num[so[i]];
		} 
		cout<<so[i]<<"\n";
	}
	return 0;
}
