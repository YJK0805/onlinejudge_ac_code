#include <bits/stdc++.h>
using namespace std;
long long n,id;
string s;
long long count(long long num){
	id++;
	if(s[id]=='0'){
		return 0;
	}else if(s[id]=='1'){
		return num*num;
	}else{
		long long cur=0;
		for(int i=0;i<4;i++){
			cur+=count(num/2);
		}
		return cur;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>s>>n;
	id=-1;
	cout<<count(n)<<"\n";
	return 0;
}
