#include<stdio.h>
int main(){
	int n,k,min,max;
	scanf("%d %d",&n,&k);
	if(n<k) {
		max=k;
		min =n;
	}
	else {
		max=n;min=k;
	}
	int sum=0;
	for(int i=min;i<=max;i++){
		sum+=i;
	}
	printf("%d",sum);
}
