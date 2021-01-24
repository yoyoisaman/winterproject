#include<stdio.h>
#include<math.h>
int main(){
	int cnt = 0;
	int buy = 0, sell = 0;
	double value = 0;
	scanf("%d",&cnt);
	for(int i =0;i<cnt;i++){
		scanf("%d %d",&buy,&sell);
		double value = (((double)sell-buy)/(double)buy)*100*100;
		if(value>0) value += 0.0000001;
		if(value<0) value -= 0.0000001;
		double res=value/100;
		value=round(value);
		value/=100;
		if(res >= 10.0 || res <=-7.0){
			printf("%.2f%% dispose\n",value);
		}else{
			printf("%.2f%% keep\n",value);
		}
		value = 0;
	}
}
