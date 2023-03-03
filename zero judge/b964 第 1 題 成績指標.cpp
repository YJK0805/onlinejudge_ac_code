#include <bits/stdc++.h>
using namespace std;
long long a[10000];
int main(){ 
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	if(a[0]>=60){
		cout<<"best case\n";
	}else{
		cout<<*(lower_bound(a,a+n,60)-1)<<"\n"; 
	}
	if(a[n-1]<60){
		cout<<"worst case\n";
	}else{
		cout<<*(upper_bound(a,a+n,59))<<"\n";
	}
	return 0;
}
