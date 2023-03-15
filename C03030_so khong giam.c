#include <stdio.h>
#include <math.h>
typedef long long ll;

int check(ll n ){
	while(n > 0){
		int i = n % 10;
		n /= 10;
		int j = n % 10;
		if(i < j ) return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		int i, f = pow(10, n - 1), l = pow(10, n);
		for(i = f; i < l; i++){
			if(check(i)) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}
