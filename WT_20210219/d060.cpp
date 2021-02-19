#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	while (cin >> a){
	    int b = 25 - a;
	    if (b >= 0){
	    	cout << b << '\n';
	    }
	    else{
	    	cout << 85 - a << '\n';
	    }
	}
}
