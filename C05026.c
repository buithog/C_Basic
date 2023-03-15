#include <stdio.h>
#include <math.h>

int snt(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main()
{

	int n;
	scanf("%d", &n);
	int i, j, a[n][n], cnt[1000] = {0};
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(snt(a[i][j])) cnt[i]++;
		}
	}
	int max = cnt[0];
	for(i = 0; i < n; i++){
		if(max < cnt[i]){
			max = cnt[i];
		}
	}
	for(i = 0; i < n; i++){
		if(max == cnt[i]){
			printf("%d\n", i + 1);
			for(j = 0; j < n; j++){
				if(snt(a[i][j])) printf("%d ", a[i][j]);
			}
			break;
		}
	}
	return 0;
}
