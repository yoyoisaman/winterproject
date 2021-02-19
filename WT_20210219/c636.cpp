#include <bits/stdc++.h>
using namespace std;

void s(int n){
    switch(n){
		case 1 :
			cout << "¹«" << '\n';
    		break;
		case 2 :
			cout << "¤û" << '\n';
    		break;
    	case 3 :
			cout << "ªê" << '\n';
    		break;
    	case 4 :
			cout << "¨ß" << '\n';
    		break;
    	case 5 :
			cout << "Às" << '\n';
    		break;
    	case 6 :
			cout << "³D" << '\n';
    		break;
    	case 7 :
			cout << "°¨" << '\n';
    		break;
    	case 8 :
			cout << "¦Ï" << '\n';
    		break;
    	case 9 :
			cout << "µU" << '\n';
    		break;
    	case 10 :
			cout << "Âû" << '\n';
    		break;
    	case 11 :
			cout << "ª¯" << '\n';
    		break;
    	case 0 :
			cout << "½Þ" << '\n';
    		break;
    	case 12 :
			cout << "½Þ" << '\n';
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
