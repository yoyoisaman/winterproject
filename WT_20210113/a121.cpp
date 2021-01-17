#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int notprime[20010] = {0};
	for(int i =4;i<10010;i+=2){
		notprime[i] = 1;
	}
	for(int j = 3;j<10010;j++){
		if(notprime[j] == 0){
			for(int i = j*2;i<10010;i+=j){
				notprime[i] = 1; 
			}
		}
	}
	notprime[1] = 1;
	int cnt = 0, flag = 0;
	int m = 0, n = 0;
	while((scanf("%d %d",&m,&n))!=EOF){
		if(n<=10000){
			for(int i = m;i<=n;i++){
				if(notprime[i] == 0){
					cnt++;
				}
			}
			printf("%d\n",cnt);
			cnt = 0;
		}else {
			for(int i = m;i<=n;i++){
				int result = sqrt(i);
				for(int j = 2;j<=result;j++){
					if(notprime[j] == 0){
						if(i%j==0){
							flag = 1;
							break;
						}
					}
				}
				if(flag == 1){
					flag = 0;
				}else{
					cnt++;
				}
			}
			printf("%d\n",cnt);
			cnt = 0;
		}
	}
}
