#include<bits/stdc++.h>
using namespace std;


void dis(int x,int y){
	int yee = 100-(x+y);
	if(yee > 0 && yee<=30){
		cout << "sad!" << '\n';
	}else if(yee > 30 && yee<=60){
		cout << "hmm~~" << '\n';
	}else if(yee > 60 && yee<100){
		cout << "Happyyummy" << '\n';
	}else{
		cout << "evil!!" << '\n';
	}
	return;
}

int main(){
	int n=0;
	while(cin >> n){
		for(int i=0;i<n;i++){
			int x=0,y=0;
			cin>>x>>y;
			dis(x,y);
		}
	}
}
