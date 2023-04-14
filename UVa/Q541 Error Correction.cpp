#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,i,j,ai,aj;
	while(cin >> n){
        if(n == 0){
            break;
        }else{
            long long m[n][n],ci = 0,cj = 0,sum;
            for(i = 0;i < n;i++){
                for(j = 0;j < n;j++){
                    cin >> m[i][j];
                }
            }
            for(i = 0;i < n;i++){
                sum = 0;
                for(j = 0;j < n;j++){
                    sum += m[i][j];
                }
                if(sum % 2 != 0){
                    ai = i;
                    ci += 1;
                }
            }
            for(j = 0;j < n;j++){
                sum = 0;
                for(i = 0;i < n;i++){
                    sum += m[i][j];
                }
                if(sum % 2 != 0){
                    aj = j;
                    cj += 1;
                }
            }
            if(ci == 1 && cj == 1){
                cout << "Change bit (" << ai + 1 << "," << aj + 1 << ")\n";
            }else if(ci == 0 && cj == 0){
                cout << "OK\n";
            }else{
                cout << "Corrupt\n";
            }
        }
	}
	return 0;
}
