#include<iostream>
#include<math.h>

using namespace std;
int arr[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };

int count(int y, int m, int d){
	int year = (y-1)*365 + (y-1)/4 - (y-1)/100 + (y-1)/400;
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
        arr[1] = 29;
    }
    else {
        arr[1] = 28;
    }
    int month = 0;
    for (int i = 0; i < m - 1; i++) {
        month += arr[i];
    }
    return  year + month + d;
}

int main(){
	int y1 = 0, y2 = 0, m1 = 0, m2 = 0, d1 = 0, d2 = 0;
	while(cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2){
		int tmp1 = count(y1,m1,d1);
		int tmp2 = count(y2,m2,d2);
		cout << abs(tmp1-tmp2) << '\n';
	} 
}
