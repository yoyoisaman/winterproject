#include <bits/stdc++.h>
using namespace std;

void s(int n){
    switch(n){
		case 1 :
			cout << "��" << '\n';
    		break;
		case 2 :
			cout << "��" << '\n';
    		break;
    	case 3 :
			cout << "��" << '\n';
    		break;
    	case 4 :
			cout << "��" << '\n';
    		break;
    	case 5 :
			cout << "�s" << '\n';
    		break;
    	case 6 :
			cout << "�D" << '\n';
    		break;
    	case 7 :
			cout << "��" << '\n';
    		break;
    	case 8 :
			cout << "��" << '\n';
    		break;
    	case 9 :
			cout << "�U" << '\n';
    		break;
    	case 10 :
			cout << "��" << '\n';
    		break;
    	case 11 :
			cout << "��" << '\n';
    		break;
    	case 0 :
			cout << "��" << '\n';
    		break;
    	case 12 :
			cout << "��" << '\n';
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
