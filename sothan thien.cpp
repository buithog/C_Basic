#include<stdio.h>
#include<math.h>
int dao(int n){
	int res=0;
	while(n>0){
		res = res*10 +n%10;
		n/=10;
	}
	return res;
}
int gcd(int a, int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int n,k,dem=0;
	int danhdau[100000];
	scanf("%d %d",&n,&k);
	for(int i=n ;i<=k;i++){
		if(gcd(i,dao(i)) == 1){
			dem++;
		}
	}
	printf("%d",dem);
}
