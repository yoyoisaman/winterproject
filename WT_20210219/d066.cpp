#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a >= 8 && a <= 16) {
		cout << "At School" << '\n';
	}
    else if (a == 7 && b >= 30){
		cout << "At School" << '\n';
	}
    else{
    	cout << "Off School" << '\n';
	}
}
