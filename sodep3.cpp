#include<stdio.h>
#include<math.h>
int a[10000];
int thuannghich(long long n){
	long long m=n,tmp=0;
	while(m>0){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if(n==tmp) return 1;
	return 0;
}
int checknt(long long n){
	long long m=n;
	while(m>0){
		int x=m%10;
		if(!a[x]) return 0;  
		m/=10;
	}
	return 1;
}
int main(){
	a[1]=a[2]=a[3]=a[5]=a[7]=1;
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(checknt(n) && thuannghich(n)) printf("YES\n");
		else printf("NO\n");
	}
}
