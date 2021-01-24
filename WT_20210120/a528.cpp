#include<iostream>
#include<algorithm>
#include<malloc.h>
#include<string>
#include<vector>
using namespace std;

bool comp2(string a,string b){
	if(a.size() == b.size()){
		for(int i =0;i<a.size();i++){
			if(a[i] == b[i]) continue;
			else{
				return b[i]>a[i];
			}
		}
	} 
	return b.size() > a.size();
}
bool comp1(string a,string b){
	if(a.size() == b.size()){
		for(int i =0;i<a.size();i++){
			if(a[i] == b[i]) continue;
			else{
				return a[i]>b[i];
			}
		}
	} 
	return a.size() > b.size();
}

int main(){
	int cnt = 0;
	string s;
	vector<string> vec1,vec2;
	while(cin>>cnt){
		vec1.clear();
		vec2.clear();
		for(int i =0;i<cnt;i++){
			cin >> s;
			if(s[0] == '-'){
				vec1.push_back(s);
			}
			else{
				vec2.push_back(s);
			}
		}
		sort(vec2.begin(),vec2.end(),comp2);
		sort(vec1.begin(),vec1.end(),comp1);
		for(int i =0;i<vec1.size();i++){
			cout << vec1[i] << '\n';
		}
		for(int i =0;i<vec2.size();i++){
			cout << vec2[i] << '\n';
		}
	}
} 
