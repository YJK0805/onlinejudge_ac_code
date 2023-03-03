#include <iostream>
using namespace std;
int main(){
	long long h,m,s;
	cin>>h>>m>>s;
	if(s>=60){
		m+=(s/60);
		s%=60;
	}
	if(m>=60){
		h+=(m/60);
		m%=60;
	}
	if(h>=24){
		h%=24;
	}
	if(h<10){
		if(h==0){
			cout<<"00:";
		}else{
			cout<<"0"<<h<<":";
		}
	}else{
		cout<<h<<":";
	}
	if(m<10){
		if(s==0){
			cout<<"00:";
		}else{
			cout<<"0"<<m<<":";
		}
	}else{
		cout<<m<<":";
	}
	if(s<10){
		if(s==0){
			cout<<"00\n";
		}else{
			cout<<"0"<<s<<"\n";
		}
	}else{
		cout<<s<<"\n";
	}
	return 0;
}
