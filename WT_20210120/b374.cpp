#include<stdio.h>

int N[30000] ={0};

int find(int cnt){
	int max = 0;
	for(int i=0;i<30000;i++){
		if(N[i] > max)	{
			max = N[i];
		}	
	}
	return max;
}
void result(int max){
	for(int i=0;i<30000;i++){
		if(N[i] == max)	{
			 printf("%d %d\n",i,N[i]);
		}	
	}
}


int main(){
	int cnt = 0;
	int tmp = 0;
	int max = 0;
	scanf("%d",&cnt);
	for(int i=0;i<cnt;i++){
		scanf("%d",&tmp);
		N[tmp] ++;
	}
	max = find(cnt);
	result(max);
}
