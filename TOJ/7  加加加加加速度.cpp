#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	while(n--){
		long long m;
		cin>>m;
		long long s[m+1];
		for(int i=0;i<m+1;i++){
			cin>>s[i];
		}
		for(int i=m;i>0;i--){
			for(int j=0;j<i;j++){
				s[j]=s[j+1]-s[j];
			}
		}
		cout<<s[0]<<"\n";
	}
	return 0;
}
