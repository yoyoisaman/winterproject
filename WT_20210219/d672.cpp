#include <bits/stdc++.h>
using namespace std;

int sol(string s, int cnt){
	int sum = 0;
	for(int i=0;i<s.size();i++){
		sum += s[i] - '0';
	}
	cnt ++;
	if (sum == 9){
		return cnt;
    }else if(sum < 9){
        return 0;
    }else{
        return sol(to_string(sum), cnt);
    }
}

int main(){
	int ans = 0;
	string s;
	while(cin >> s){
		if( s == "0"){
			break;
		}
		ans = sol(s,0);
		if (ans == 0){
            cout << s << " is not a multiple of 9.\n";
        }else{
            cout << s << " is a multiple of 9 and has 9-degree " << ans << ".\n";
        }
	}
}
