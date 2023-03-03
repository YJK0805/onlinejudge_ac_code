#include<iostream>
using namespace std;
int main() {
	long long h,d,f;
	double u,low,l;
	while(cin>>h>>u>>d>>f){
		if(h==0){
			break;
		}else{
			l=0;
			low=f/100.0*u;
			long long day=0;
			while(l>=0&&l<h){
				day++;
				if(l+u>h){
					break;
				}else if(u>0){
					l=l+u-d;
				}else{
					l=l-d;
				}
				u-=low;
			}
			if(l<0){
				cout<<"failure on day "<<day<<"\n";
			}else{
				cout<<"success on day "<<day<<"\n";
			}
		}
	}
	return 0;
}
