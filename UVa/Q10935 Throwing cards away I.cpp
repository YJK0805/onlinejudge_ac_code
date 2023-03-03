#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;  
	while(cin>>n&&n){
		queue <long long> card;
		for(int i=1;i<=n;i++){
			card.push(i);
		}
		cout<<"Discarded cards:";
		int f=0;
		while(card.size()!=1){
			int x=card.front();
			card.pop();
			if(card.size()&&f){
				cout<<",";
			}
			cout<<" "<<x;
			card.push(card.front());
			card.pop();
			f=1;
		}
		cout<<"\nRemaining card: "<<card.front()<<"\n";
	}
	return 0;
}
