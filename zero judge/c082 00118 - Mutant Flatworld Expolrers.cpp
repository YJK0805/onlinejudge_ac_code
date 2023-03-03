#include <bits/stdc++.h>
using namespace std;
int main(){
	long long dir[130];
	dir['N']=0,dir['E']=1,dir['S']=2,dir['W']=3;
	char dir2[4]={'N','E','S','W'};
	long long bd1,bd2;
	cin>>bd1>>bd2;
	long long rd1,rd2;
	char rd;
	string s;
	long long fo[4][2]={{0,1},{1,0},{0,-1},{-1,0}},bb[100][2],t=-1;
	while(cin>>rd1>>rd2>>rd>>s){
		long long rdi=dir[rd],f=1;
		for(int i=0;i<s.length();i++){
			if(s[i]=='R'){
				rdi=(rdi+1)%4;
			}else if(s[i]=='L'){
				rdi=(rdi+3)%4;
			}else if(s[i]=='F'){
				if(f==1&&rd1+fo[rdi][0]<=bd1&&rd1+fo[rdi][0]>=0&&rd2+fo[rdi][1]<=bd2&&rd2+fo[rdi][1]>=0){
					rd1+=fo[rdi][0];
					rd2+=fo[rdi][1];
				}else{
					if(t>=0){
						for(int j=0;j<=t;j++){
							if(bb[j][0]==rd1&&bb[j][1]==rd2){
								f=1;
								break;
							}else{
								f=0;
							}
						}
					}else{
						f=0;
					}
					if(f==0){
						t++;
						bb[t][0]=rd1;
						bb[t][1]=rd2; 
						cout<<rd1<<" "<<rd2<<" "<<dir2[rdi]<<" LOST\n";
						break;
					}
				}
			}
			if(f==0){
				break;
			}
		}
		if(f==1){
			cout<<rd1<<" "<<rd2<<" "<<dir2[rdi]<<"\n";
		}
	}
	return 0;
}
