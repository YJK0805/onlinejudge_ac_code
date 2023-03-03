#include <bits/stdc++.h>
using namespace std;
int main(){
	long long c,d,n,i,j;
	cin>>n;
	long long a[n],b[n];
	for(i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++){
		for(c=1;c<=b[i];c++){
				for(j=1;j<=a[i];j++){
					for(d=1;d<=j;d++){
						cout<<j;
					}
					cout<<"\n";
				}
				for(j=j-2;j>0;j--){
					for(d=1;d<=j;d++){
						cout<<j;
					}
					cout<<"\n";
				}
				if(c!=b[i]){
					cout<<"\n";
				}
		}
		if(i!=n-1){
			cout<<"\n";
		}
	}
	return 0;
}
