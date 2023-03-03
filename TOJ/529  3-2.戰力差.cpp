#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if((a-b)>=0){
		cout<<a-b<<"\n";
	}else{
		cout<<-1*(a-b)<<"\n";
	}
	return 0;
}
