#include <bits/stdc++.h>
using namespace std;
int tstart,tend,ansl,astart,aend;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>s;
	int f=0;
	ansl=0;
	for(int i=1;i<s.size();i++){
		if(f==1){
			if(s[i-1]+1==s[i]){
				tend++;
			}else{
				if((tend-tstart+1)>=ansl){
					ansl=(tend-tstart+1);
					astart=tstart,aend=tend;
				}
				f=0;
				tstart=0;
				tend=0;
			}
		}else{
			if(s[i-1]+1==s[i]){
				tstart=i-1;
				tend=i;
				f=1;
			}
		}
	}
	if((tend-tstart+1)>=ansl){
		ansl=(tend-tstart+1);
		astart=tstart;
		aend=tend;
	}
	if(ansl==1){
		cout<<1<<" "<<s[s.size()-1]<<"\n";
	}else{
		cout<<ansl<<" ";
		for(int i=astart;i<=aend;i++){
			cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}
