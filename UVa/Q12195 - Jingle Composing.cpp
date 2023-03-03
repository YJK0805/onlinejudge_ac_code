#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		long long sum=0,ans=0;
		if(s=="*"){
			break;
		}else{
			for(int i=0;s[i];i++){
				switch(s[i]) {
                case 'W':
                    sum +=64;
				break;
                case 'H':
                    sum +=32;
				break;
                case 'Q':
                    sum +=16;
				break;
                case 'E':
                    sum +=8;
				break;
                case 'S':
                    sum +=4;
				break;
                case 'T':
                    sum +=2;
				break;
                case 'X':
                    sum +=1;
				break;
				case '/':;
					if(sum==64){
						ans++;
					}
                    sum=0;
                    break;
            	}
			}
			cout<<ans<<"\n";
		}
		}
	return 0;
}
