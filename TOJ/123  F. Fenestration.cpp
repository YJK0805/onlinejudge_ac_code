#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	string s[2];
	for(int i=0;i<2;i++){
		cin>>s[i];
	}
	long long f=1;
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]=='0'){
				if(i==0){
					if(s[1][j-1]=='0'||s[1][j+1]=='0'||s[1][j]=='0'){
						f=0;
					}
				}else{
					if(s[0][j-1]=='0'||s[0][j+1]=='0'||s[0][j]=='0'){
						f=0;
					}
				}
			}
			if(f==0){
				break;
			}
		}
	}
	if(f==1){
		cout<<"FENDED OFF!\n";
	}else{
		cout<<"FENESTRATION FORTIFICATION FAILURE!\n";
	}
	return 0;
}
