#include<stdio.h>

int main(){
	int n=0;
	while((scanf("%d",&n))!=EOF){
		if(n==0) break;
		int count = 0;
		while(n%2){
			count++;
			n/=2;
		}
		printf("%d\n",count);
	}
}
