#include<bits/stdc++.h>
using namespace std;

int evo = 0;

void cnt(int c,int w){

	while(1==1){
		if(c+w<13) return;
		if(c>=12){
			c-=11;
			evo++;
		}
		else{
			c++;
			w--;
		}
	}
}

int main(){
	int c=0,w=0;
	cin >> c >> w;
	cnt(c,w);
	cout << evo << '\n';
}
