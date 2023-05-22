#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string,char> mp;
    mp[".-"] = 'A',mp["-..."] = 'B',mp["-.-."] = 'C',mp["-.."] = 'D';
	mp["."] = 'E',mp["..-."] = 'F',mp["--."] = 'G',mp["...."] = 'H';
	mp[".."] = 'I',mp[".---"] = 'J',mp["-.-"] = 'K',mp[".-.."] = 'L';
	mp["--"] = 'M',mp["-."] = 'N',mp["---"] = 'O',mp[".--."] = 'P';
	mp["--.-"] = 'Q',mp[".-."] = 'R',mp["..."] = 'S',mp["-"] = 'T';
	mp["..-"] = 'U',mp["...-"] = 'V',mp[".--"] = 'W',mp["-..-"] = 'X';
	mp["-.--"] = 'Y',mp["--.."] = 'Z',mp["-----"] = '0',mp[".----"] = '1';
	mp["..---"] = '2',mp["...--"] = '3',mp["....-"] = '4',mp["....."] = '5';
	mp["-...."] = '6',mp["--..."] = '7',mp["---.."] = '8',mp["----."] = '9';
	mp[".-.-.-"] = '.',mp["--..--"] = ',',mp["..--.."] = '?',mp[".----."] = '\'';
	mp["-.-.--"] = '!',mp["-..-."] = '/',mp["-.--."] = '(',mp["-.--.-"] = ')';
	mp[".-..."] = '&',mp["---..."] = ':',mp["-.-.-."] = ';',mp["-...-"] = '=';
	mp[".-.-."] = '+',mp["-....-"] = '-',mp["..--.-"] = '_',mp[".-..-."] = '"';
	mp[".--.-."] = '@';
	string s;
	int n;
	cin >> n;
	cin.ignore();
	for(int t = 1;t <= n;t++){
		if(t != 1){
			cout << "\n";
		}
		getline(cin,s);
		cout << "Message #" << t << "\n";
		string now;
		istringstream sp(s);
		while(getline(sp,now, ' ')){
			if(now.size() == 0){
				cout << " ";
			}else{
				cout << mp[now];
			}
		}
		cout << "\n";
	}
    return 0;
}
