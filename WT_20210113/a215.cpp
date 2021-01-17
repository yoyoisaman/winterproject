#include<stdio.h>

int main(){
	int n = 0, m = 0;
	int cnt = 0;
	int sum = 0;
	while((scanf("%d %d",&n,&m))!=EOF){
		int k = 0;
		do {
			sum += n;
			n++;
			cnt ++;
		}while(sum<=m);
		printf("%d\n",cnt);
		cnt = 0;
		sum = 0;
	}
}
