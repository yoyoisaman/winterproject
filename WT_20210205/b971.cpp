#include<bits/stdc++.h>

using namespace std;

int main(){
	int a=0,b=0,c=0;
	while(cin>>a>>b>>c){
		int k = (b-a)/c;
		for(int i=0;i<=k;i++){
			cout << a+(i)*c << ' ';
		}
		cout << '\n';
	}
}
