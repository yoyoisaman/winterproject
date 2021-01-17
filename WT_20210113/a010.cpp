#include<stdio.h>
#include<math.h>
int main(){
	int input = 0;
	int cnt[2000000]= {0};
	int count = 0;
	int exist = 0;
	
	scanf("%d",&input);
	int tmp = 0;
    if(input>2000000){
        tmp=sqrt(input);
    }else{
        tmp = input;
    }
    for(int i = 2;i<tmp;i++){
		while(input%i==0){
			input = input/i;
            if(exist == 0){
				exist = 1;
			}
			count++;
            cnt[i]++;
		}
	}
	if(exist == 0){
		printf("%d\n",input);
	}
	else if(exist == 1){
		for(int i =2;i<tmp;i++){
			if(cnt[i]>0){
                if(cnt[i]>1){
				    printf("%d^%d",i,cnt[i]);
                    count=count - cnt[i];
                }
                else{
                    printf("%d",i);
                    count--;
                }
                if(count>0){
                    printf(" * ");
                }
            }
		}
        printf("\n");
	} 
}
