#include<iostream>
using namespace std;
int main() {
	long long i,n;
	cin>>n;
	string s;
	for(i=0;i<n;i++){
		cin>>s;
		int t=0;
		if(s.length()==3){
			if(s[0]=='o'){
				t++;
			}
			if(s[1]=='n'){
				t++;
			}
			if(s[2]=='e'){
				t++;
			}
			if(t==3||t==2){
				cout<<1<<"\n";
			}
			t=0;
			if(s[0]=='t'){
				t++;
			}
			if(s[1]=='w'){
				t++;
			}
			if(s[2]=='o'){
				t++;
			}
			if(t==3||t==2){
				cout<<2<<"\n";
			}
		}else if(s.length()==5){
			cout<<3<<"\n";
		}
	}
	return 0;
}
