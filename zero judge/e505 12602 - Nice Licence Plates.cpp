#include <bits/stdc++.h>
using namespace std;
int main(){
    long long sum1,sum2,n,i;
	string s;
	cin>>n;
	for(i=0;i<n;i++){
        cin>>s;
        sum1=(65-((int)s[0]))*26*26+(65-((int)s[1]))*26+(65-((int)s[2]));
        sum2=(48-(int)(s[4]))*1000+(48-(int)(s[5]))*100+(48-(int)(s[6]))*10+(48-(int)(s[7]));
        if(sum1-sum2>=-100&&sum1-sum2<=100){
            cout<<"nice\n";
        }else{
            cout<<"not nice\n";
        }
	}
	return 0;
}
