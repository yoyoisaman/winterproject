#include<stdio.h>

int main(){
	int day = 0;
	long long int sum = 0;
	int cnt = 0;
	while((scanf("%d",&day))!=EOF){
		for(int i=0;i<day;i++){
			scanf("%d",&cnt);
			sum+=(i+1)*cnt;
		}
		printf("%lld\n",sum);
		sum = 0;
	}
} 
