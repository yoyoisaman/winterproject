#include<stdio.h>

int ans(int cnt){
	if(cnt == 1){
		return 1;
	}
	return ans(cnt-1) + (cnt-1);
}

int main(){
	int cnt = 0;
	int result = 0;
	while((scanf("%d",&cnt))!=EOF){
		result = ans(cnt);
		printf("%d\n",result);
	}
}
