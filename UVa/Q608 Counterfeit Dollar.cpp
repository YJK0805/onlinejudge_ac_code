#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	while(n--){
		long long w[130],i,j;
		string sl[3],sr[3],ss[3];
		for(i=0;i<3;i++){
			cin>>sl[i]>>sr[i]>>ss[i];
		}
		long long f=0;
		long long lw=0,rw=0,a=0; 
		for(i=0;i<2;i++){
			for(j='A';j<='L';j++){
				w['A']=0,w['B']=0,w['C']=0,w['D']=0,w['E']=0,w['F']=0;
				w['G']=0,w['H']=0,w['I']=0,w['J']=0,w['K']=0,w['L']=0;
				if(i==0){
					w[j]=1;
				}else{
					w[j]=-1;
				}
				for(int l=0;l<3;l++){
					lw=0,rw=0;
					for(int k=0;k<sl[l].length();k++){
						lw+=w[sl[l][k]];
						rw+=w[sr[l][k]];
					}
					if(lw<rw&&ss[l]=="down"){
						a++;
					}else if(lw>rw&&ss[l]=="up"){
						a++;
					}else if(lw==rw&&ss[l]=="even"){
						a++;
					}
				}
				if(a==3){
					f=1;
					break;
				}else{
					a=0;
				}
			}
			if(f==1){
				break;
			}
		}
		cout<<char(j)<<" is the counterfeit coin and it is ";
		if(i==0){
			cout<<"heavy.\n";
		}else{
			cout<<"light.\n";
		}
	}
	return 0;
}
