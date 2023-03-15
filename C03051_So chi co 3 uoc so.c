#include <stdio.h>
#include <math.h>
typedef long long ll;

ll snt(ll n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll a, b;
		scanf("%lld%lld", &a, &b);
		ll i, cnt = 0;
		for(i = sqrt(a); i <= sqrt(b); i++){
			if(snt(i)) cnt++;
		}
		printf("%lld\n", cnt);
	}
	return 0;
}
