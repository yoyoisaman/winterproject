#include<stdio.h>
#include<string.h>

char word[128][64];

void sol(int cnt,char *lan){
	for(int i =0;i<cnt-1;i++){
		printf("%s %s ",word[i],lan);
	}
	printf("%s\n",word[cnt-1]);
}

int main(){
	int i =0;
	char lan[64];
	scanf("%s",lan);
	while((scanf("%s",word[i])!=EOF)){
		i++;
	}
	sol(i,lan);
} 
