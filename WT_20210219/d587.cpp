#include <bits/stdc++.h>
using namespace std;

int main(){
	int b[4];
	int n = 0;
	while(cin >> n){
		memset(b,0,sizeof(b));
		int k = 0;
		for(int i=0;i<n;i++){
			cin >> k;
			b[k]++;
		}
		for(int i=1;i<=3;i++){
			for(int j = 0;j<b[i];j++){
				cout << i << ' ';
			}
		}
		cout << '\n';
	}
}
