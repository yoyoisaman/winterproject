#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
	char input[1024];
	int alphacnt[26];
	while((scanf("%s",input))!=EOF){
		memset(alphacnt,0,sizeof(alphacnt));
		int flag = 0;
		int len = strlen(input);
		for(int i = 0;i<len;i++){
			if(isupper(input[i])){
				alphacnt[input[i] - 'A'] ++;
			}else if(islower(input[i])){
				alphacnt[input[i] - 'a'] ++;
			}
		}
		for(int i = 0;i<26;i++){
		//	printf("i:%d\t%d\n",i,alphacnt[i]);
			if(alphacnt[i] % 2 !=0){
				flag++;
			}
		}
		//printf("flag:%d\n",flag);
		if(flag>1){
			printf("no...\n");
		}else{
			printf("yes !\n");
		}
	}
}
