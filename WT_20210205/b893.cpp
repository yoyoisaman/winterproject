#include<bits/stdc++.h>
using namespace std;

vector<int>v;

void rt(long long int a,long long int b,long long int c,long long int d,long long int e,long long int f){
	long long int x=0,x1=0;
	if(!a&&!b&&!c&&!d&&!e&&!f){
		cout<< "Too many... = =\"" << '\n';
		return;
	}
	for(int i=-35;i<=35;i++){
		int g = i+1;
		x=(long long int)((a*i*i*i*i*i)+(b*i*i*i*i)+(c*i*i*i)+(d*i*i)+(e*i)+(f));
		if(x==0){
			v.push_back(i);v.push_back(i);
			continue;
		}
		x1=(long long int)((a*g*g*g*g*g)+(b*g*g*g*g)+(c*g*g*g)+(d*g*g)+(e*g)+(f));
		if(x * x1 <0){
			v.push_back(i);v.push_back(g);
			continue;
		}
	}
	if(v.empty()){
		cout << "N0THING! >\\\\\\<" << '\n';
	}else{
		for(int i=0;i<v.size();i+=2){
			cout << v[i] <<' '<< v[i+1] << '\n';	
		}
	}
	v.clear();
	return;
}

int main(){
	long long int a=0,b=0,c=0,d=0,e=0,f=0;
	while(cin>>a>>b>>c>>d>>e>>f){
		rt(a,b,c,d,e,f);
	}
}
