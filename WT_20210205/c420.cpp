#include<bits/stdc++.h>

using namespace std;

int main(){
	int cnt = 0;
	string word,line;
	cin >> cnt;
	for(int i=0;i<cnt-1;i++){
		line+='_';
	}
	word.push_back('*');
	for(int i=0;i<cnt;i++){
		cout << line << word << line << '\n';
		line.pop_back();
		word += "**";
	}
}
