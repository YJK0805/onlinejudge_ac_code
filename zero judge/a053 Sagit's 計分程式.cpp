#include <iostream>
using namespace std;
int main(){
    int N,score;
    while(cin>>N){
    if(N<=10)
    score=N*6;
    else if(N<=20&&N>10)
    score=60+(N-10)*2;
    else if(N<=40&&N>20)
    score=60+20+(N-20)*1;
    else if(N>=40)
    score=100;
    cout<<score<<endl;}
	return 0;
}
