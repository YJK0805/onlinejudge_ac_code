#include <iostream>
using namespace std;
int main(){
	long long n,k,i,sum;
	cin>>n>>k; 
	long long a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		sum=(a[i]+10)*2;
		sum*=sum;
		if(sum<=k){
			cout<<sum<<"\n";
		}else{
			cout<<"BURST!!!\n";
			return 0;
		}
	}
	return 0;
}
