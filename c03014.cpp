#include<stdio.h>
long long UCLN(long long a, long long b){
	if(b==0) return a;
	else return UCLN(b,a%b);
}
long long BCNN(long long a, long long b){
	return (a*b)/UCLN(a,b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,k;
		scanf("%lld %lld",&n,&k);
		printf("%lld\n",UCLN(n,k));
	}
}
