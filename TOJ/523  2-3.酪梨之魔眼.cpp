#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=100){
		cout<<n/10<<"\n";
	}else{
		cout<<n%100/10<<"\n";
	}
	return 0;
}
