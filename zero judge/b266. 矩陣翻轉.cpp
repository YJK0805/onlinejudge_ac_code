#include <bits/stdc++.h>
using namespace std;
long long r,c,m;
long long mp[20][20],cur[20][20];
void Flip(){
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cur[i][j] = mp[i][j];
        }
    }
    for(int i = 0;i < r;i++){
        for (int j = 0;j < c;j++){
            mp[i][j] = cur[r - 1 - i][j];
        }
    }
}  
void Rotate(){
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            cur[i][j] = mp[i][j];
        }
    }
    for(int i = c - 1;i >= 0;i--){
        for(int j = 0;j < r;j++){
            mp[c - 1 - i][j] = cur[j][i];
        }
    }
    swap(r,c);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> r >> c >> m){
    	for(int i = 0;i < r;i++){
    		for(int j = 0;j < c;j++){
    			cin >> mp[i][j];
    		}
    	}
    	vector<long long> q(m);
    	for(int i = 0;i < m;i++){
    		cin >> q[i];
    	}
    	for(int i = m - 1;i >= 0;i--){
            if(q[i] == 0){
            	Rotate();
            }else{
            	Flip();
            }
        }
        cout << r << " " << c << "\n";
        for(int i = 0;i < r;i++){
    		for(int j = 0;j < c;j++){
    			cout << mp[i][j] << " ";
    		}
    		cout << "\n";
    	}
    }
    return 0;
}
