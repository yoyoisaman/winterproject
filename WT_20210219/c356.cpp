#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);   
    cin.tie(0);
	int n = 0;
	char c ;
	cin >> n ;
	c = cin.get(); 
	int i = 0 ;
	for(int j =0;j<n*n;j++){
		c = cin.get();
		if(i == 0){
			cout << c;
		}
		if(i == n+1){
			cout << c;
			i = 0;
		}
		i++;
	}
	cout << '\n';
}
