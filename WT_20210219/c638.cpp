#include <bits/stdc++.h>
using namespace std;

void a(int y){
	int y1=y%10;
	if (y1==0) cout << "庚";
	else if (y1==1) cout << "辛";
	else if (y1==2) cout << "壬"; 
	else if (y1==4) cout << "甲";
	else if (y1==5) cout << "乙";
	else if (y1==6) cout << "丙";
	else if (y1==7) cout << "丁";
	else if (y1==8) cout << "戊";
	else if (y1==9) cout << "己";
	else cout << "癸";

	int y2=y%12;
	if (y2==0) cout << "申";
	else if (y2==1) cout << "酉";
	else if (y2==2) cout << "戌";
	else if (y2==3) cout << "亥";
	else if (y2==4) cout << "子";
	else if (y2==5) cout << "丑";
	else if (y2==6) cout << "寅";
	else if (y2==7) cout << "卯";
	else if (y2==8) cout << "辰";
	else if (y2==10) cout << "午";
	else if (y2==11) cout << "未";
	else  cout << "巳";
	cout << '\n';
	return;
}


int main(){
	int y = 0; 
	while(cin >> y){
		a(y);
	}
}
