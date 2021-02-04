#include<bits/stdc++.h>

using namespace std;

void xaxb(string s,string s1){
	int a=0,b=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(s[i] == s1[j] && i==j){
				a++;
			}else if(s[i] == s1[j] && i!=j){
				b++;
			}
		}
	}
	cout << a <<'A' << b << 'B' << '\n';
	return;
} 

int main(){
	string s,s1;
	int cnt = 0;
	cin >> s >> cnt;
	for(int i=0;i<cnt;i++){
		cin >> s1;
		xaxb(s,s1);
	}
}
