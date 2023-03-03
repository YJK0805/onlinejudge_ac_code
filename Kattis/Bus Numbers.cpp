#include<bits/stdc++.h>
using namespace std;
long long a[100010];
int main() {
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long f=0;
	for(int i=1,x=1;i<=n;i++){
		if(a[i]-a[i-1]==1&&i!=n){
			x++;
		}else{
			if(f){
				cout<<" ";
			}else{
				f=1;
			}
			if(x>2){
				cout<<a[i-x]<<"-"<<a[i-1];
			}else if(x==2){
				cout<<a[i-2]<<" "<<a[i-1];
			}else{
				cout<<a[i-1];
			}
			x=1;
		}
	} 
	cout<<"\n";
	return 0;
}
