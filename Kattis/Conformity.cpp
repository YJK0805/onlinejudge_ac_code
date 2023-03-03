#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	while(cin>>n&&n){
		long long a[5],b[n];
		for(int i=0;i<n;i++){
			for(int j=0;j<5;j++){
				cin>>a[j];
			}
			sort(a,a+5);
			b[i]=a[0];
			for(int j=1;j<5;j++){
				b[i]*=1000;
				b[i]+=a[j];
			}
		}
		sort(b,b+n);
		long long t=1,m=0,p=0;
		for(int i=1;i<n;i++){
			if(b[i]==b[i-1]){
				t++;
			}else if(t>m){
				m=t;
				p=t;
				t=1;
			}else if(t==m){
				p+=t;
				t=1;
			}else{
				t=1;
			}
		}
		if(m==1){
			p=n;
		}
		cout<<p<<"\n";
	}
	return 0;
}
