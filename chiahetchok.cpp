#include<stdio.h>
#include<math.h>
int main(){
	long long a,n,k;
	scanf("%lld %lld %lld" ,&a,&k,&n);
	long long i=1;
	if(k == 1 || n == a) printf("-1");
	else{
		int ok=0;
		while(i*k <= n){
			if(k*i <= n && k*i -a > 0  ){
				printf("%lld " ,k*i-a);
				ok=1;
			}
			i++;
		}
		if(!ok) printf("-1");
	}
}
