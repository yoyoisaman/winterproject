#include <bits/stdc++.h>
using namespace std;

void sol(string s){
	for(int i = 1;i<s.size()-1;i++){
		s[i] = '_';
	}
	cout << s << '\n'
} 

int main(){
	string s;
	cin >> s;
	sol(s);
}
