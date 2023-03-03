#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	long long k,a[n];
	for(int i=0;i<n;i++){
		cin>>k;
		if(i!=0){
			a[i]=a[i-1]+k;
		}else{
			a[i]=k;
		}
	}
	int a1,a2,q;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>a1>>a2;
		if(a1>a2){
			swap(a1,a2);
		}
		if(a1!=1){
			cout<<a[a2-1]-a[a1-2]<<"\n";
		}else{
			cout<<a[a2-1]<<"\n";
		}
	}
	return 0;
}
