#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string finger[128];
    finger['c'] = "00111001111";
    finger['d'] = "00111001110";
    finger['e'] = "00111001100";
    finger['f'] = "00111001000";
    finger['g'] = "00111000000";
    finger['a'] = "00110000000";
    finger['b'] = "00100000000";
    finger['C'] = "00010000000";
    finger['D'] = "01111001110";
    finger['E'] = "01111001100";
    finger['F'] = "01111001000";
    finger['G'] = "01111000000";
    finger['A'] = "01110000000";
    finger['B'] = "01100000000";
    long long t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s;
    	getline(cin,s);
    	long long now_finger[20] = {0},ans[20] = {0};
    	for(int i = 0;i < s.size();i++){
            for(int j = 1;j <= 10;j++){
                if(now_finger[j] != finger[s[i]][j] - '0'){
                    if(finger[s[i]][j] == '1'){
                        now_finger[j] = 1;
                        ans[j]++;
                    }else{
                        now_finger[j] = 0;
                    }
                }
            }
        }
        cout << ans[1];
        for(long long i = 2;i <= 10;i++){
            cout << " " << ans[i];
        }
        cout << "\n";
    }
    return 0;
}