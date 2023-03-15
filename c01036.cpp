#include<stdio.h>
int main(){
	int t;
	scanf("%t",&t);
	while(t--){
		long long n,sum=0;
		scanf("%lld",&n);
		while(n>0){
			sum+=n%10;
			n/=10;
		}
		printf("%d",sum);
	}
}
