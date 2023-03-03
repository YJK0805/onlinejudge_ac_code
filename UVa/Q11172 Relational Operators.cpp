#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,a,b;
	cin>>n;
	for(i=0;i<n;i++){
	    cin>>a>>b;
	    if(a>b){
	    	cout<<">\n";
		}else if(a<b){
			cout<<"<\n";
		}else{
			cout<<"=\n";
		}
	}
	return 0;
}
