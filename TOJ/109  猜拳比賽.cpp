#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long a,b,pc=0,ps=0;
	while(n--){
		cin>>a>>b;
		if(a!=b){
			if(a==2){
				if(b==5){
					pc++;
				}else{
					ps++;
				}
			}else if(a==0){
				if(b==2){
					pc++;
				}else{
					ps++;
				}
			}else if(a==5){
				if(b==0){
					pc++;
				}else{
					ps++;
				}
			}
		}
	}
	if(pc>ps){
		cout<<"The prince wins.\n";
	}else if(pc<ps){
		cout<<"The princess wins.\n";
	}else{
		cout<<"The referee wins.\n";
	}
	return 0;
}
