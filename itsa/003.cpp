#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int cnt=0, m=0;
	int result = 0;
	char a[102];
	int input[110][110] = {0};
	scanf("%d",&cnt);
	for(int i =0;i<cnt;i++){
		scanf("%d",&m);
		for(int j = 0;j<m;j++){
			scanf("%s",a);
			int len=strlen(a);
			for(int l=0;l<len;l++){
				input[j][l] = (a[l] - '0');
			}
		}
		for(int j = 0;j<m;j++){
			for(int l = 0;l<m;l++){
				if(input[j][l] == 1){
					if(input[j+1][l] == 1 && input[j-1][l] == 1 && input[j][l+1] == 1 && input[j][l-1] == 1&& input[j+1][l+1] == 1&& input[j+1][l-1] == 1&& input[j-1][l-1] == 1&& input[j-1][l+1] == 1){
						result++;
					}	
				}
			}
		}
		printf("%d\n",result);
		result = 0;
	}
}
