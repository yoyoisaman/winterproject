#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int exist = 0;
int arms[100000];
int cnt = 0;

void isarm(int inputnum){
	char inputchar [64];
	sprintf(inputchar,"%d",inputnum);
	int len = strlen(inputchar);
	int sum = 0, tmp = 1;
	for(int i =0;i<len;i++){
		for(int j =0;j<len;j++){
			tmp *= (inputchar[i] - '0'); 
		}
		sum += tmp;
		tmp = 1; 
	}
	if(inputnum == sum){
		arms[cnt] = inputnum;
		cnt++;
		return ;
	}else {
		return ;
	}
}

int main(){
	int n = 0, m = 0;
	scanf("%d %d",&n,&m);
	for(int i = n;i<=m;i++){
		isarm(i);
	}
	if(cnt==0){
		printf("none\n");
	}else {
		for(int i = 0;i<cnt-1;i++){
			printf("%d ",arms[i]);
		}
		printf("%d\n",arms[cnt-1]);
	}
}
