#include<stdio.h>
#include<math.h>
int main(){
	long long le=0,chan=0,n;
	scanf("%lld",&n);
	while(n>0){
		int tmp=n%10;
		if(tmp%2 == 0) chan++;
		else le++;
		n/=10;
	}
	printf("%d %d",le,chan);
}
