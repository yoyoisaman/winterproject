#include<bits/stdc++.h>

using namespace std;

map<int,int>mp1,mp2;

int main(){
	int key=0,value=0;
	int sum=0;
	while(1==1){
		scanf("%d:%d",&key,&value);
		if(key== 0 && value==0){
			break;
		}
		mp1.insert({key,value});
	}
	while(1==1){
		scanf("%d:%d",&key,&value);
		if(key== 0 && value==0){
			break;
		}
		mp2.insert({key,value});
	}
	for(auto it=mp1.begin();it!=mp1.end();it++){
		sum += mp1[it->first] * mp2[it->first];
	}
	printf("%d\n",sum);
}
