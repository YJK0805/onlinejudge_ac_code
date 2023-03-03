#include <iostream>
using namespace std;
int main(){
    int y;
    while(cin>>y)
    if(y%4==0){
            if(y%400==0 or y%100!=0)
            cout<<"閏年"<<endl;
    else
        cout<<"平年"<<endl;
    }
    else
        cout<<"平年"<<endl;
	return 0;
}
