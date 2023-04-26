#include <iostream>
using namespace std;
int main(){
    int y;
    while(cin>>y)
    if(y%4==0){
            if(y%400==0 or y%100!=0)
            cout<<"�|�~"<<endl;
    else
        cout<<"���~"<<endl;
    }
    else
        cout<<"���~"<<endl;
	return 0;
}
