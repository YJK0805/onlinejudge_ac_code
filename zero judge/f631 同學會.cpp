#include <bits/stdc++.h>
using namespace std;
long long smo,ans1,dm,amo=0,dmo=0,dmon[10000];
priority_queue <long long> mon;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); 
	long long n,m;
	while(cin>>n>>m){
		amo=0,dmo=0;
		while(n--){
			cin>>smo;
			mon.push(smo);
			amo+=smo;
		}
		for(int i=0;i<m;i++){
			cin>>dmon[i];
			dmo+=dmon[i];
		}
		if(amo>=dmo){
			cout<<mon.top()<<" ";
			for(int i=0;i<m;i++){
				while(dmon[i]){
					long long a=mon.top();
					mon.pop();
					if(a){
						if(a>=dmon[i]){
							a-=dmon[i];
							mon.push(a);
							dmon[i]=0;
						}else{
							dmon[i]-=a;
							a=0;
							mon.push(a);
						}
					}else{
						a=mon.top();
						mon.pop();
					}
				}
			}
			cout<<mon.top()<<"\n";
		}else{
			cout<<"Oh My God\n";
		}
		while(!mon.empty()){
			mon.pop();
		}
	} 
	return 0;
}
