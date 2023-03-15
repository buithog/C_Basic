#include<stdio.h>
#include<math.h>
int hoanhao(long long n){
	long long sum=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) {
			sum+=i;
			sum+=(n/i);
		}
	}
	if(sum==n) return 1;
	return 0;
}
int main(){
	long long n;
	scanf("%d",&n);
	for(int i=6;i<=n;i++){
		if(hoanhao(i)) printf("%d ",i);
	}
}
