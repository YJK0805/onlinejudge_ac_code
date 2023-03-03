#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;  
	while(cin>>n&&n){
		queue <long long> card;
		for(int i=1;i<=n;i++){
			card.push(i);
		}
		cout<<"Discarded cards: ";
		if(card.size()!=1){
			while(card.size()!=1){
				int x=card.front();
				card.pop();
				if(card.size()!=1){
					cout<<x<<", ";
				}else{
					cout<<x<<"\n";
				}
				card.push(card.front());
				card.pop();
			}
		}else{
			cout<<"\n";
		}
		cout<<"Remaining card: "<<card.front()<<"\n";
	}
	return 0;
}
