#include<iostream>

using namespace std;

int main(){
	int year = 0;
	while(cin>>year){
		if((year % 4 == 0 && year % 100!=0)||year % 400 == 0){
			cout << "閏年" << '\n';
		}else{
			cout << "平年" << '\n';
		}
	}
}
