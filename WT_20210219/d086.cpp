#include <bits/stdc++.h>
using namespace std;

void sol(string s){
	int sum = 0;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){
			sum += s[i] - 'A' + 1;
		}else if(islower(s[i])){
			sum += s[i] - 'a' + 1;
		}else{
			cout << "Fail\n";
			return;
		} 
	}
	cout << sum << '\n';
}


int main(){
	string s;
	while(cin >> s){
		if(s == "0"){
			break;
		} 
		sol(s);
	}
}
