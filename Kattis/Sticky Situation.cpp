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
	long long f=1;
	for(int i=0;i<n-2;i++){
		if(a[i]+a[i+1]>a[i+2]){
			cout<<"possible\n";
			f=0;
			break;
		}
	}
	if(f){
		cout<<"impossible\n";
	}
	return 0;
}
