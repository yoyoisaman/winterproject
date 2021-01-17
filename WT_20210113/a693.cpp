#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n =0, m =0;
	int food[100005];
	while((scanf("%d %d",&n,&m))!=EOF){
		int start = 0, end = 0, sum = 0;
		memset(food,0,sizeof(food));
		for(int i =0;i<n;i++){
			scanf("%d",&food[i]);
		}
		for(int i =0;i<m;i++){
			scanf("%d %d",&start,&end);
			for(int j = start;j<=end;j++){
				sum+=food[j-1];
			}
			printf("%d\n",sum);
			sum = 0;
		}
	}
}
