#include <bits/stdc++.h>
using namespace std;
void treeA(long long n){
	for(int i = 1;i <= n;i++){
		for(int j = n;j > i;j--){
			cout << " ";
		}
		for(int j = 0;j < 2 * i - 1;j++){
			cout << "*";
		}
		cout << "\n";
	}
}
void treeC(long long N){
	long long space = N - 1;
	for(int t = 1;t <= N;t++){
		int n = t;
		for(int i = 1;i <= n;i++){
			for(int j = 0;j < space;j++){
				cout << " ";
			}
			for(int j = n;j > i;j--){
				cout << " ";
			}
			for(int j = 0;j < 2 * i - 1;j++){
				cout << "*";
			}
			cout << "\n";
		}
		space--;
	}
}
void treeE(long long n){
	for(int i = 1;i <= n;i++){
		cout << "  ";
		for(int j = n;j > i;j--){
			cout << " ";
		}
		for(int j = 0;j < 2 * i - 1;j++){
			cout << "*";
		}
		cout << "\n";
	}
	for(int i = 0;i < 2 * n + 3;i++){
		cout << "#";
	}
	cout << "\n";
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	char c;
    	cin >> c >> n;
    	switch(c){
    		case 'A':
    			treeA(n);
    			break;
    		case 'B':
    			treeA(n);
    			treeA(n);
    			break;
    		case 'C':
    			treeC(n);
    			break;
    		case 'D':
    			treeA(10 * n);
    			break;
    		case 'E':
    			treeE(n);
    			break;
    		case 'F':
    			treeA(2 * n);
    			break;
    		case 'G':
    			treeA(3 * n);
    			break;
    		case 'H':
    			treeA(7 * n);
    			break;
    		case 'I':
    			treeA(4 * n - 1);
    			break;
    	}
		cout << "\n";
    }
    return 0;
}
