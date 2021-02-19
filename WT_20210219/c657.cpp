#include <bits/stdc++.h>
using namespace std;


void sol(string s){
	int cnt = 0,max = 0;
	char curr,result;
	for(int i = 0;i<s.size();i++){
		if(s[i] == curr){
			cnt++;
		}else{
			if(cnt > max){
				max = cnt;
				result = curr;
			}
			cnt = 1;
			curr = s[i];
		}
	}
	if(cnt > max){
		max = cnt;
		result = curr;
	}
	cout << result << ' ' << max << '\n';
	return;
}

int main(){
	string s;
	while(cin >> s){
		sol(s);
	}
}
