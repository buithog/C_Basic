#include<stdio.h>
#include<math.h>
int tong(int n){
	int m=n;
	while(m>0){
		n+= m%10;
		m/=10;
	}
	return n;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int res=1;
	while( tong(n) <=k){
		res++;
		n=tong(n);
	}
	printf("%d",res);
}
