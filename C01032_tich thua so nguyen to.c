#include <stdio.h>
typedef long long ll;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		int cnt = 0;
		ll i = 2, mul = 1;
		while(n > 1){
			if(n % i == 0){
				cnt++;
				if(n == i)
					mul *= i;
				n /= i;
			}
			else{
				if(cnt > 0){
					mul *= i;
					cnt = 0;
				}
				i++;
			}
		}
		printf("%lld\n", mul);
	}
	return 0;
}
