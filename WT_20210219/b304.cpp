#include <bits/stdc++.h>
using namespace std;

void sol(string s){
	stack<char>st;
	for(int i=0;i<s.size();i++){
        if(st.empty()){
        	st.push(s[i]);
		}else if(st.top()=='(' && s[i] ==')'){
				st.pop();
			}else if(st.top()=='[' && s[i]==']'){
				st.pop();
			}else{
				st.push(s[i]);
        	}	
		}
	if(st.empty())
            cout<<"Yes\n";
        else
            cout<<"No\n";
}


int main(){
	int n = 0;
	string s;
	cin >> n ;
	cin.ignore();
	while(n--){
		getline(cin,s);
		sol(s);
	}
}
