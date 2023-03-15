#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i, j, a[n + 5][n + 5];
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++) scanf("%d", &a[i][j]);
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			if(i == j){
				int tmp = a[i][j];
				a[i][j] = a[i][n - j + 1];
				a[i][n - j + 1] = tmp;
			}
		}
	}
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
