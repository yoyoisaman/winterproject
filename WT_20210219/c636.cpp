#include <bits/stdc++.h>
using namespace std;

void s(int n){
    switch(n){
	case 1 :
		cout << "鼠" << '\n';
    		break;
	case 2 :
		cout << "牛" << '\n';
    		break;
    	case 3 :
		cout << "虎" << '\n';
    		break;
    	case 4 :
		cout << "兔" << '\n';
    		break;
    	case 5 :
		cout << "龍" << '\n';
    		break;
    	case 6 :
		cout << "蛇" << '\n';
    		break;
    	case 7 :
		cout << "馬" << '\n';
    		break;
    	case 8 :
		cout << "羊" << '\n';
    		break;
    	case 9 :
		cout << "猴" << '\n';
    		break;
    	case 10 :
		cout << "雞" << '\n';
    		break;
    	case 11 :
		cout << "狗" << '\n';
    		break;
    	case 0 :
	case 12 :
		cout << "豬" << '\n';
    		break;
	}
}

int main(){ 
	int n;
	while(cin >> n){
		if(n>0){
			s(n%12);
		}else if(n<0){
			s(12-abs(n+1)%12);
		}
	}
	return 0;
}
