#include <stdio.h>
#include <stdbool.h>
typedef long long ll;

int main()
{
	int t;
	scanf("%d", &t);
	ll sum = 0;
	ll i, j;
	bool check[2000005];
	for(i = 2; i <= 2000005; i++) check[i] = true;
	for(i = 2; i <= 2000005; i++){
		if(check[i] == true){
			for(j = 2 * i; j <= 2000005; j += i) check[j] = false;
		}
	}
	while(t--)
	{
		int n;
		scanf("%d", &n);
		j = 2;
		while(j <= n){
			if(check[n]){
				sum += n;
				break;
			}
			if(check[j]){
				if(n % j == 0) {
					while(n % j == 0){
						sum += j;
						n /= j;
					}
				}
			}
			j++;
		}
	}
	printf("%lld", sum);
	return 0;
}
