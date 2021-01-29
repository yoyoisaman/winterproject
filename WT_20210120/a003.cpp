#include<iostream>
#include<utility>

using namespace std;

int main(){
	pair<int,int>day;
	cin >> day.first >> day.second;
	switch((day.first *2 + day.second)%3){
		case 0:
			cout<<"普通"<< '\n';
			break;
		case 1:
			cout<<"吉" << '\n';
			break;
		case 2:
			cout<<"大吉" << '\n';
			break;
	}
}
