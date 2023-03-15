#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,ok=1;
		scanf("%lld",&n);
		for(int i=2;i<=sqrt(n);i++){
			if(n%i == 0) ok=0;
		}
		if(n==2) ok=1;
		if(ok) printf("YES\n");
		else printf("NO\n");
	}
}
