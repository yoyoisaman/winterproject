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
		long long int t = 0;
		while(ss >> d >> s){
			if(s=="gb"||s=="g") t+=(d*1000000000*8);
			else if(s=="m"||s=="mb") t+=(d*8*1000000);
			else if(s=="k"||s=="kb") t+=(d*1000*8);
			else if(s=="byte"){
				int j = d;
				if(d!=j) t+=j*8+(d-j)*10;
				else{
					t+=d*8;
				}
			}else{
				t+=d;
			}
		}
		cout<<t<<'\n';
		ss.clear();
	}
}




