#include <stdio.h>

int a[101];

void ans(){
	for(int i=0;i<101;i++){
		if(a[i] > 0){
			for(int j=0;j<a[i];j++){
				printf("%d ",i);
			}
		}
	}
	printf("\n");
}

int main(){
	int n=0,k=0;
	scanf("%d",&n);
	for(int i=0;i<101;i++){
		a[i] = 0;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		a[k] ++;
	}
	ans();
}
