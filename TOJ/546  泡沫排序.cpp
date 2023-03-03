#include <iostream>
using namespace std;
int main(){
	long long n,t,i,j;
	cin>>n; 
	long long a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<=i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
