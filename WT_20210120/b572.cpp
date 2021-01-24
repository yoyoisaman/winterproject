#include<stdio.h>
#include<math.h>

void late(int h1,int m1,int h2,int m2,int t){
	int min1 = h1*60 + m1;
	int min2 = h2*60 + m2;
	if((min2-min1) < t){
		printf("No\n");
		return;
	} 
	printf("Yes\n");
	return;
} 

int main(){
	int cnt = 0;
	while((scanf("%d",&cnt))!=EOF){
		for(int i=0;i<cnt;i++){
			int h1=0,m1=0,h2=0,m2=0,t=0;
			scanf("%d %d %d %d %d",&h1,&m1,&h2,&m2,&t);
			late(h1,m1,h2,m2,t);	
		} 
	} 
}
