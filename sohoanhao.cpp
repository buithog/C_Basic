#include<stdio.h>
#include<math.h>
int main(){
	long long n;
	scanf("%d",&n);
	long long sum=1;
	for(int i=2;i<= sqrt(n);i++){
		if(n%i ==0 ){
			sum+=i;
			sum+=(n/i);
		}
	}
	if(sum == n) printf("1");
	else printf("0");
}
