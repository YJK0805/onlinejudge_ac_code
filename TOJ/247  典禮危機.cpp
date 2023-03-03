#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n==0){
		cout<<"Nothing\n";
	}else{
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i%2==0){
					if(j%2==0){
						cout<<"*";
					}else{
						cout<<"-";
					}
				}else{
					if(j%2==1){
						cout<<"*";
					}else{
						cout<<"-";
					}
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}

