#include<bits/stdc++.h>

using namespace std;

void ct(string s){
	int cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i] == '0'){
			cnt++;
		}
		else if(s[i] == '6'){
			cnt ++;
		}else if(s[i] == '8'){
			cnt += 2;
		}else if(s[i] == '9'){
			cnt ++;
		}
	}
	cout << cnt << '\n';
	return;
}

int main(){
	string s;
	while(cin >> s){
		ct(s);
	}
}
