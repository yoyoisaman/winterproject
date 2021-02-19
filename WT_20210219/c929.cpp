#include<bits/stdc++.h>
using namespace std;

void sol(string s1,string s2){
	bool flag = false;
	for(int i=0;i<s2.size();i++){
		if(s1[0] == s2[i] && s1.size() + i < s2.size()){
			flag = true;
			for(int j=0;j<s1.size();j++){
				if(s1[j] != s2[j+i]){
					flag = false;
					break;
				}
			}
			if(flag){
				cout << '\n';
				i+= s1.size()-1;
				continue;
			}
		}
		cout << s2[i];
	}
}

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	sol(s1,s2);
}
