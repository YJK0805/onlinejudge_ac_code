#include <iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	x=x*x;
	while(x>=10){
		x=x % 10;
	}
	cout<< x <<"\n";
	return 0;
}
