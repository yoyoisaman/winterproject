#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
void mysort(char **input,int cnt){
	for(int i = 0 ;i<cnt;i++){
		for(int j = 0 ;j<cnt-1;j++){
			int len1 = strlen(input[j]);
            int len2 = strlen(input[j+1]);
            if(input[j][len1-1] > input[j+1][len2-1]){
				char tmp[30];
				strcpy(tmp,input[j]);
				strcpy(input[j],input[j+1]);
				strcpy(input[j+1],tmp);
			}
            else if(input[j][len1-1]== input[j+1][len2-1]){
				if(atoi(input[j])<atoi(input[j+1])){
					char tmp[30];
					strcpy(tmp,input[j]);
					strcpy(input[j],input[j+1]);
					strcpy(input[j+1],tmp);
				}
			}
		}
	}
}

int main(){
	int cnt = 0;
	char *input[1024];
	while((scanf("%d",&cnt))!=EOF){
		int first = 0;
		for(int i = 0;i<cnt;i++){			
			input[i] = (char*)malloc(sizeof(char)*30);
            scanf("%s",input[i]);
		}
		mysort(input,cnt);
		for(int i = 0;i<cnt;i++){
			if(first == 0){
				first =1;
			}else{
				printf(" ");
			}
			printf("%s",input[i]);
		}
		printf("\n");
		for(int i = 0;i<cnt;i++){
			memset(input[i],'\0',strlen(input[i]));
		}
        cnt = 0;
        first = 0;
	}
}

