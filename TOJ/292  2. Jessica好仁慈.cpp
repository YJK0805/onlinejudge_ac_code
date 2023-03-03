#include<bits/stdc++.h>
using namespace std;
int main(){
    const double EPS=1e-7;
    long long n=0,i,j,len,a,b,be=0,x;
    string c;
    cin>>a>>b>>c;
    if(c=="0"){
    	cout<<0<<"\n";
	}else{
	    len=c.length();
	    for(i=len-1,j=0;i>=0;i--,j++){
	        x=pow(a,i)+EPS;
	        x/=1;
	        be+=(c[j]-'0')*x;
	    }
	    while(be>=pow(b,n)){
	        n++;
	    }
	    n-=1;
	    for(i=n;i>=0;i--){
	        x=pow(b,i)+EPS;
	        x/=1;
	        cout<<be/x;
	        be=be%x;
	    }
	    cout<<"\n";
	}
    return 0;
}
