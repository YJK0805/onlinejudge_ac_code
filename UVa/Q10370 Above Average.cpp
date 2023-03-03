#include <bits/stdc++.h>
using namespace std;
int main(){
	long long c;
	cin>>c;
	long long i,j,n,t;
	for(i=0;i<c;i++){
        cin>>t;
        double grade[t],ave=0,ans;
        long long p=0;
        for(j=0;j<t;j++){
            cin>>grade[j];
            ave+=grade[j];
        }
        ave/=(t*1.0);
        for(j=0;j<t;j++){
            if(grade[j]>ave){
                p++;
            }
        }
        ans=p/(t*1.0);
        cout<<fixed<<setprecision(3)<<ans*100<<"%\n";
	}
	return 0;
}
