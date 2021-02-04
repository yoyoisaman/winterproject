#include<bits/stdc++.h>

using namespace std;

pair<int,int>pos={0,0};

void move(int a,int b){
	switch(a){
		case 0:
			pos.second += b;
			break;
		case 1:
			pos.first += b;
			break;
		case 2:
			pos.second -= b;
			break;
		case 3:
			pos.first -= b;
			break;
		return;
	}	
} 

int main(){
	int n=0;
	cin >> n;
	for(int i=0;i<n;i++){
		int a=0,b=0;
		cin >> a >> b;
		move(a,b);
	}
	cout << pos.first << ' ' << pos.second << '\n';
}
