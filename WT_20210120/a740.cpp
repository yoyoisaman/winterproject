#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int cnt[2000000]= {0};
int exist = 0;
int big(int input){
	int k=0;
	if(input>2000000){
	    return k=sqrt(input);
	}else{
	    return input;
	}
}
void table(int tmp,int input){
	for(int i = 2;i<tmp;i++){
		while(input%i==0){
			input = input/i;
		    if(exist == 0){
				exist = 1;
			}
		    cnt[i]++;
		}
	}
}

int main(){
	int input = 0;
	int sum = 0;
	int tmp = 0;
    while((scanf("%d",&input))!=EOF){
		tmp=big(input);
		table(tmp,input);
		if(exist == 0){
			printf("%d\n",input);
		}else if(exist == 1){
			for(int i =2;i<tmp;i++){
				if(cnt[i]>0){
	                sum+= cnt[i] * i;
	            }
			}
	        printf("%d\n",sum);
	        sum = 0;
	        exist = 0;
	        memset(cnt,0,sizeof(cnt));
		} 	
	} 
}
