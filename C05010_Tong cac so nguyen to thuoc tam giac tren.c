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
	int a[n + 5][n + 5], i , j, cnt = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		for(j = i; j < n ; j ++){
			if(snt(a[i][j])){
				cnt += a[i][j];
			}
		}
	}
	printf("%d", cnt);
//	for(i = 0; i < n; i++){
//		for(j = 0; j < n; j++){
//			if(snt(a[j])) printf("%d ", a[j]);
//		}
//		printf("\n");
//	}
	return 0;
}
