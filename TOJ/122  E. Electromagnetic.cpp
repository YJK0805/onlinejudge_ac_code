#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n>=1000000000){
		cout<<"R\n";
	}else if(n>=700000){
		cout<<"IR\n";
	}else if(n>=400000){
		cout<<"VIS\n";
	}else if(n>=1000){
		cout<<"UV\n";
	}else if(n>=10){
		cout<<"X\n";
	}else{
		cout<<"Y\n";
	}
	return 0;
}
