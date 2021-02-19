#include <bits/stdc++.h>
using namespace std;

int main(){
	int a=0, b=0, c=0;
	while(cin>>a>>b>>c){
		int s;
		s=(a+b+c)/2;
		cout << s*(s-a)*(s-b)*(s-c) << '\n';
	}
}
