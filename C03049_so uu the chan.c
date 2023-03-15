#include <stdio.h>
typedef long long ll;

ll check(ll n){
	int i, cntC = 0, cntL = 0;
	if(n % 2 != 0) return 0;
	else{
		while(n > 0){
			i = n % 10;
			if(i % 2 == 0) cntC++;
			else cntL++;
			n /= 10;
		}
		if(cntL < cntC) return 1;
		else return 0;
	}
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
