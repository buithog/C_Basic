#include <stdio.h>
typedef long long ll;

int main()
{
	ll n;
	scanf("%lld", &n);
	int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
	while(n > 0){
		int i = n % 10;
		if(i == 2) cnt2++;
		else if(i == 3) cnt3++;
		else if(i == 5) cnt5++;
		else if(i == 7) cnt7++;
		n /= 10;
	}
	if(cnt2 > 0) printf("2 %d\n", cnt2);
	if(cnt3 > 0) printf("3 %d\n", cnt3);
	if(cnt5 > 0) printf("5 %d\n", cnt5);
	if(cnt7 > 0) printf("7 %d\n", cnt7);
	return 0;
}
