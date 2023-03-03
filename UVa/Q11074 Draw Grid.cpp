#include <bits/stdc++.h>
using namespace std;
int main(){
	int s,t,n,c=1;
	while(cin>>s>>t>>n){
		if(s!=0&&t!=0&&n!=0){
			long long a=t*(n+1)+s*n;
			string w="",ww="";
			for(int i=0;i<a;i++){
				w=w+"*";
			}
			for(int i=1,j=0,x=0;x<a;i++,x++){
				if(j==0){
					ww=ww+"*";
					if(i==t){
						i=0;
						j=1;
					}
				}else if(j==1){
					ww=ww+".";
					if(i==s){
						i=0;
						j=0;
					}
				}
			}
			cout<<"Case "<<c<<":\n";
			for(int x=0,i=1,j=0;x<a;i++,x++){
				if(j==0){
					cout<<w<<"\n";
					if(i==t){
						i=0;
						j=1;
					}
				}else{
					cout<<ww<<"\n";
					if(i==s){
						i=0;
						j=0;
					}
				}
			}
			c++;
			if(c!=1){
				cout<<"\n";
			}
		}else{
			break;
		}
	}
	return 0;
}
