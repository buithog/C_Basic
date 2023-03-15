#include<stdio.h>
int main(){
	int n,dem=0;
	scanf("%d",&n);
	while(n>0){
		dem++;
		n/=10;
	}
	printf("%d",dem);
}
