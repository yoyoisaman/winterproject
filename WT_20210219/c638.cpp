#include <bits/stdc++.h>
using namespace std;

void a(int y){
	int y1=y%10;
    if (y1==0) cout << "��";
    else if (y1==1) cout << "��";
    else if (y1==2) cout << "��"; 
	else if (y1==4) cout << "��";
    else if (y1==5) cout << "�A";
    else if (y1==6) cout << "��";
    else if (y1==7) cout << "�B";
    else if (y1==8) cout << "��";
    else if (y1==9) cout << "�v";
    else cout << "��";

    int y2=y%12;
    if (y2==0) cout << "��";
    else if (y2==1) cout << "��";
    else if (y2==2) cout << "��";
    else if (y2==3) cout << "��";
    else if (y2==4) cout << "�l";
    else if (y2==5) cout << "��";
    else if (y2==6) cout << "�G";
    else if (y2==7) cout << "�f";
    else if (y2==8) cout << "��";
    else if (y2==10) cout << "��";
    else if (y2==11) cout << "��";
    else  cout << "�x";
    cout << '\n';
    return;
}


int main(){
	int y = 0; 
	while(cin >> y){
		a(y);
	}
}
