#include<bits/stdc++.h>

using namespace std;

int coinCnt[5];
int coin[5];
int cnt = 0;

void rec(int money,int level){
	if(money == 0){
		printf("(%d",coinCnt[0]);
		for(int i=1;i<cnt;i++){
			printf(",%d",coinCnt[i]);
		}
		printf(")\n");
		return;
	}
	if(level >= cnt){
		return;
	} 
	int t = money/coin[level];
	
	for(int i=0;i<=t;i++){
		coinCnt[level] = i;
		rec(money - (coin[level]*i),level+1); 
	}	 
}

int main(){
	int money = 0;
	while((scanf("%d",&cnt))!=EOF){
		for(int i=0;i<cnt;i++){
			scanf("%d",&coin[i]);
		}
		scanf("%d",&money);
		rec(money,0);
	}
}
