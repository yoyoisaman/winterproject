#include<stdio.h>
#include<string.h>

int main(void)
{
	int cnt=0;
	scanf("%d",&cnt);

	int n, m, a[100][100] = {0};
	while(scanf("%d%d",&n,&m)!=EOF){
		int x=0,y=n-1,count=0;
		memset(a,0,sizeof(a));
		count=a[0][n-1]=1;
		
		while(count<n*n){
			while(x+1<n && !a[x+1][y]) {
				count++;
				x++;
			//	printf("ax:%d\ty:%dcnt:%d\n",x,y,count);
				a[x][y]=count;			
			}
			while(y-1>=0 && !a[x][y-1]) {
				count++;
				y--;
				a[x][y]=+count;
			//	printf("bx:%d\ty:%dcnt:%d\n",x,y,count);
			}
			while(x-1>=0 && !a[x-1][y]){
				x --;
				count++;
				a[x][y]=count;
			//	printf("cx:%d\ty:%dcnt:%d\n",x,y,count);
			} 
			while(y+1<n && !a[x][y+1]){
				y++;
				count++;
				a[x][y]=count;
			//	printf("dx:%d\ty:%dcnt:%d\n",x,y,count);
			} 
		}
		//printf("AAAA%d\n",a[2][0]);
		if(m == 1){
			for(y=n-1;y>-1;y--){
				for(x=0;x<n;x++){
					printf("%5d", a[x][y]);
				}
			printf("\n");
			}	
		}else{
			for(x=0;x<n;x++){
				for(y=n-1;y>=0;y--){
					printf("%5d", a[x][y]);
				}
			printf("\n");
			}	
		}
	}
}
