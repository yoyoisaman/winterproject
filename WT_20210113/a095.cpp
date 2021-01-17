#include<stdio.h>

int main(){
	int m = 0, n = 0;
	while((scanf("%d %d",&m,&n))!=EOF){
		if(m == n){
			printf("%d\n",m);
		}
		else{
			printf("%d\n",n+1);
		}
	}
}
