#include <iostream>
using namespace std;
int main(){
	int x1,x2,x3,x4,p=0;
	cin>>x1>>x2>>x3>>x4;
	if(x3>x1&&x3<x2){
		p=1;
	}else if(x4>x1&&x4<x2){
		p=1;
	}else if(x3<x1&&x4>x2){
		p=1;
	}else{
		p=0;
	}
	if(p){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}
