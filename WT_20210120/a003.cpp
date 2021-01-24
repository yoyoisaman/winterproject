#include<iostream>
#include<utility>

using namespace std;

int main(){
	pair<int,int>day;
	cin >> day.first >> day.second;
	switch((day.first *2 + day.second)%3){
		case 0:
			cout<<"´¶³q" << '\n';
			break;
		case 1:
			cout<<"¦N" << '\n';
			break;
		case 2:
			cout<<"¤j¦N" << '\n';
			break;
	}
}
