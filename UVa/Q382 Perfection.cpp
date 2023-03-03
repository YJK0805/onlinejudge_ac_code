#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,sa[110],a[110];
    long long t=-1;
    while(cin>>s){
    	long long x=s.length(),n=0,sum=0;
    	if(s!="0"){
    		t++;
    		for(int i=0;i<s.length();i++,x--){
    			n+=((s[i]-'0')*pow(10,x-1))/1;
			}
    		a[t]=s;
    		for(int i=a[t].length();i<5;i++){
    			a[t]=" "+a[t];
			}
    		for(int i=1;i<=n/2;i++){
    			if(n%i==0){
    				sum+=i;
				}
			}
			if(sum>n){
				sa[t]="  ABUNDANT\n";
			}else if(sum==n){
				sa[t]="  PERFECT\n";
			}else{
				sa[t]="  DEFICIENT\n";
			}
		}else{
			break;
		}
	}
	cout<<"PERFECTION OUTPUT\n";
    for(int i=0;i<=t;i++){
    	cout<<a[i]<<sa[i];
	}
	cout<<"END OF OUTPUT\n";
	return 0;
}
