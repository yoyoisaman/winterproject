#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		for(int j=0;j<n;j++){
			int a=0, b=0, c=0, d = 0;
			cin >> a >> b >> c;
			for(int i=a+1;i<b;i++){
				if(i%c){
					cout << i << ' ';
					d = 1;
				}
			}
			if(d == 0) cout << "No free parking spaces.\n";
			cout << '\n';
		}
		break;
	}
}
