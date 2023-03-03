// Problem: Honour Thy (Apaxian) Parent
// Contest: Kattis
// URL: https://open.kattis.com/problems/apaxianparent
// Memory Limit: 1024 MB
// Time Limit: 1000 ms


#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string Y,P;
	cin>>Y>>P;
	long long s=Y.size();
	if(Y[s-1]=='e'){
		cout<<Y<<'x'<<P<<"\n";
	}else if(Y[s-1]=='a'||Y[s-1]=='i'||Y[s-1]=='o'||Y[s-1]=='u'){
		for(int i=0;i<s-1;i++){
			cout<<Y[i];
		}
		cout<<"ex"<<P<<"\n";
	}else if(Y[s-2]=='e'&&Y[s-1]=='x'){
		cout<<Y<<P<<"\n";
	}else{
		cout<<Y<<"ex"<<P<<"\n";
	}
	return 0;
}
