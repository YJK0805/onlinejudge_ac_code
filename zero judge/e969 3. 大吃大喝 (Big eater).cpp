#include <bits/stdc++.h>
using namespace std;
int main(){
	long long i=0,n,m,k;
	cin>>n>>m>>k;
	if(k==1&&n<55||k==0&&n<32){
		cout<<"Wayne can't eat and drink.\n";
	}
	while(n>=32){
		if(k==1&&n>=55){
			n-=55;
			switch(n){
                case 0:{
                    cout<<i*m<<": Wayne drinks a Corn soup, and now he doesn't have money.\n";
                    break;
                }
                case 1:{
                    cout<<i*m<<": Wayne drinks a Corn soup, and now he has "<<n<<" dollar.\n";
                    k--;
                    i++;
                    break;
                }
                default:{
                    cout<<i*m<<": Wayne drinks a Corn soup, and now he has "<<n<<" dollars.\n";
                    k--;
                    i++;
                    break;
                }
            }
		}else if(k==0&&n>=32){
			n-=32;
            switch(n){
                case 0:{
                    cout<<i*m<<": Wayne eats an Apple pie, and now he doesn't have money.\n";
                    break;
                }
                case 1:{
                    cout<<i*m<<": Wayne eats an Apple pie, and now he has "<<n<<" dollar.\n";
                    k++;
                    i++;
                    break;
                }
                default:{
                    cout<<i*m<<": Wayne eats an Apple pie, and now he has "<<n<<" dollars.\n";
                    k++;
                    i++;
                    break;
                }
            }
		}else{
				break;
			}
	}
	return 0;
}
