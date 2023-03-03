#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	while(cin>>n){
		if(n!=0){
			long long a=0;	
			cout<<n<<" : ";
			if(n==1){
				cout<<1;
			}else{
				for(i=2;n/i>=1;i++){
					if(n%i==0){
						a++;
						n=n/i;
						while(n/i>=1){
							if(n%i==0){
								n=n/i;
							}else if(n%i!=0){
								break;
							}
						}
					}
				}
			}
			cout<<a<<endl;
		}else{
			break;
		}
	}
	return 0;
}
 
