#include <iostream>
using namespace std;
int main(){
	long long s[3];
	double s2[2],sum1,sum2,sum,ntu;
	for(int i=0;i<3;i++){
		cin>>s[i];
	}
	for(int i=0;i<2;i++){
		cin>>s2[i];
	}
	cin>>ntu;
	sum1=20*((s[0]*1.25+s[1]*2+s[2])/(15*4.25));
	sum2=s2[0]*0.4+s2[1]*0.4;
	sum=sum1+sum2;
	if(sum>=ntu){
		cout<<"YA\n";
	}else{
		cout<<"QQ\n";
	}
	return 0;
}
