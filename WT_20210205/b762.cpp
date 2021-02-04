#include<bits/stdc++.h>
using namespace std;

int main(){
	int cnt = 0;
	int k=0,d=0,a=0,combo=0;
	string s;
	while(cin >> cnt){
		for(int i=0;i<cnt;i++){
			cin >> s;
			if(s == "Get_Kill"){
				k++;
				combo++;
				if ( combo == 3 ){
					cout << "KILLING SPREE!" << '\n';
				}
				else if ( combo == 4 ){
					cout << "RAMPAGE~" << '\n';
				}
				else if ( combo == 5 ){
					cout << "UNSTOPPABLE!" << '\n';
				}
				else if ( combo == 6 ){
					cout << "DOMINATING!" << '\n';	
				} 
				else if ( combo == 7 ){
					cout << "GUALIKE!" << '\n';	
				} 
				else if ( combo >= 8 ){
					cout << "LEGENDARY!" << '\n';	
				} 
				else{
					cout << "You have slain an enemie." << '\n';	
				}
			}
			else if(s == "Get_Assist" ){
				a++;
			}
			else if(s == "Die"){
				if(combo>=3){
					cout << "SHUTDOWN." << '\n';
				}else{
					cout << "You have been slained." << '\n';
				}
				d++;
				combo = 0;
			}
		}
		printf("%d/%d/%d\n",k,d,a);
		k=0;d=0;a=0;
	}
}
