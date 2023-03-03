#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		for(int time=0;time<k;time++){
			for(int j=0;j<n;j++){
				for(int ttime=0;ttime<k;ttime++){
					if(i%2){
						if(j%2){
							cout<<"*";
						}else{
							cout<<" ";
						}
					}else{
						if(j%2){
							cout<<" ";
						}else{
							cout<<"*";
						}
					}
				}
			}
			cout<<"\n";
		}
	}
	return 0;
}
