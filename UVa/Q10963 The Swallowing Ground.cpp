#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,w,x=-1;
	cin>>n;
	while(n--){
		long long f=1,y1,y2,dis=-1;
		if(x!=-1){
			cout<<"\n";
		}else{
			x++;
		}
		cin>>w;
		for(int i=0;i<w;i++){
			cin>>y1>>y2;
			if(dis==-1){
				dis=abs(y1-y2);
			}else if(dis!=abs(y1-y2)){
				f=0;
			}
		}
		if(f){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
	}
	return 0;
}
