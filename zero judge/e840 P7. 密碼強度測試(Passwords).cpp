#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>s;
	int len=s.size(),e=0,num=0,score=0,c=0;
	for(int i=0;i<len;i++){
		if(s[i]>='0'&&s[i]<='9'){
			num++;
			if(i>0&&s[i-1]>='0'&&s[i-1]<='9'){
				c++;
			}
		}else{
			e++;
		}
	}
	score=len*3+e*3+num*2-c*2;
	if(len<8||num==0||e==0){
		score-=5;
	}else{
		score+=10;
	}
	if(e==0){
		score-=len;
	}
	if(num==0){
		score-=len;
	}
	cout<<score<<"\n";
	return 0;
}
