#include<bits/stdc++.h>

using namespace std;

string s;

string divInSpace(string s){
	bool d = false;
	for(int i=0;i<s.size();i++){
		if(s[i] == '.' || s[i] == ' ') continue;
		if(!d){
			if(!isdigit(s[i])){
				s.insert(s.begin()+i,' ');
				i++;
				d = true;
			} 
		}
		else{
			if(isdigit(s[i])){
				s.insert(s.begin()+i,' ');
				i++;
				d = false;
			}
		}
	}
	return s;
}

int main(){
	while(cin >> s){
		s = divInSpace(s);
		stringstream ss;
		ss << s;
		s.clear();
		double d = 0;
		int t = 0;
		while(ss >> d >> s){
			if(s=="hour"||s=="h") t+=(d*60*60*1000);
			else if(s=="m"||s=="min") t+=(d*60*1000);
			else if(s=="s"||s=="s") t+=(d*1000);
			else {
				t+=d;
			}
		}
		cout<<t<<'\n';
		ss.clear();
	}
}




