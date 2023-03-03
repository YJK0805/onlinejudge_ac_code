#include <bits/stdc++.h>
using namespace std;
long long a[10000];
bool cmp(int a,int b){
	if(a%10!=b%10){
		return a%10<b%10;
	}else{
		return a>b;
	}
}
int main(){ 
	long long n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
