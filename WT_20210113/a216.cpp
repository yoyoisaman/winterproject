#include<stdio.h>

long long int f(int day){
	if(day == 1){
		return 1;
	}
	return day + f(day-1);
}
long long int g(int day){
	if(day == 1){
		return 1;
	}
	return f(day) + g(day-1);
}
int main(){
	long long int ans1 = 0, ans2 = 0;
	int day = 0;
	while((scanf("%d",&day))!=EOF){
		ans1 = f(day);
		ans2 = g(day);
		printf("%lld %lld\n",ans1,ans2);
	}
}
