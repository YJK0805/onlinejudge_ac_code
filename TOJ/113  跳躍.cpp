#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	cin>>n;
	char m[n];
	for(int i=0;i<n;i++){
		cin>>m[i];
		if(m[i]=='P'){
			p=i;
		}
	}
	char f;
	cin>>f;
	if(f=='L'){
		swap(m[p],m[p-1]);
	}else{
		swap(m[p],m[p+1]);
	}
	for(int i=0;i<n;i++){
		cout<<m[i];
	}
	cout<<"\n";
	return 0;
}

