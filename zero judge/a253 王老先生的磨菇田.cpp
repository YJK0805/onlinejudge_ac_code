#include <bits/stdc++.h>
using namespace std;
long long s,n,mushroom[110];
set <int> a;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<=100;i++){
		mushroom[i]=0;
	}
	while(cin>>s){
		if(s==-1){
			break;
		}else{
			cin>>n;
			mushroom[s]+=n;
			a.insert(s);
		}
	}
	while(cin>>s){
		if(s==-1){
			break;
		}else{
			cin>>n;
			mushroom[s]+=n;
			a.insert(s);
		}
	}
	int len=a.size();
	for(int i=0;i<len;i++){
		int index=*a.begin();
		cout<<index<<" "<<mushroom[index]<<"\n";
		a.erase(index);
	}
	return 0;
}
