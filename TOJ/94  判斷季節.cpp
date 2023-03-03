#include <iostream>
using namespace std;
int main(){
	int k;
	cin>>k;
	if(k>=3&&k<=5){
		cout<<"Spring!\n";
	}else if(k>=6&&k<=8){
		cout<<"Summer!\n";
	}else if(k>=9&&k<=11){
		cout<<"Autumn!\n";
	}else{
		cout<<"Winter!\n";
	}
	return 0;
}
