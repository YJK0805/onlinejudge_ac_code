#include <bits/stdc++.h>
using namespace std;
int n,b[105];
bool check[20010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int times=1;
	while(cin>>n){
		memset(check,false,sizeof(check));
		bool f=false;
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(b[i]<1){
				f=true;
			} 
			if(i&&b[i-1]>=b[i]){
				f=true;
			}
		}
		if(!f){
			for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
					int num=b[i]+b[j];
					if(check[num]){
						f=true;
						break;
					}else{
						check[num]=true;
					}
				}
				if(f){
					break;
				}
			}
		}
		if(f){
			cout<<"Case #"<<times<<": It is not a B2-Sequence.\n\n";
		}else{
			cout<<"Case #"<<times<<": It is a B2-Sequence.\n\n";
		}
		times++;
	}
	return 0;
}
