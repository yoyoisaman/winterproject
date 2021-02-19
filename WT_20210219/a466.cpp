#include <bits/stdc++.h>
using namespace std;

void sol(int n){
	string s,s2 = "two";
	while(n--){
		cin >> s;
		if(s.size()!=3){
			cout << 3 << '\n';
		}else{
			int wrong = 0;
			for(int i=0;i<s.size();i++){
				if(s[i]!=s2[i]) wrong++; 
			}
			if(wrong > 1){
				cout << 1 << '\n';
			}else{
				cout << 2 << '\n';
			}
		}
	}
}

int main(){
	int n = 0;
	while(cin >> n){
		sol(n);
	}
} 
