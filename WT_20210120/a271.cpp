#include<iostream>
#include<memory.h>
#include<string.h>


long long int x=0, y=0, z=0, w=0, n=0, m=0;
long long int potion = 0;

using namespace std;

void eating(int p){
	switch(p){
		case 0:
			return;
		case 1:
			m += x;
			return;
		case 2:
			m += y;
			return;
		case 3:
			m -= z;
			return;
		case 4:
			m -= w;
			potion += n;
			return;
	}
}

int main(){
	int cnt = 0;
	int die = 0;

	char s[1024];
	scanf("%lld",&cnt);
	
	for(int i=0;i<cnt;i++){
		scanf("%lld %lld %lld %lld %lld %lld",&x,&y,&z,&w,&n,&m);
		
		potion = 0;die = 0;
		int c=getchar();
		fgets(s,1024,stdin);
		int len = strlen(s);
	
		for(int j=0;j<len;j++){
			
			if(s[j] == ' ' || s[j] == '\n'){
				continue;
			}
			
			
			m -= potion;
			
			if(m<=0) {
				printf("bye~Rabbit\n");
				die = 1;
				break;
			}
			
			eating(s[j]-'0');
			
			if(m<=0) {
				printf("bye~Rabbit\n");
				die = 1;
				break;
			}		
		}			
		
		if(die == 0){
			printf("%lldg\n",m);
		}
		
		memset(s,'\0',1024);
	} 
}
