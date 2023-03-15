#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int x = 1;
	while(x <= t){
		int n, m;
		scanf("%d%d", &n, &m);
		int i, j, k, a[n][m], b[m][n], c[n][n];
		for(i = 0 ; i < n; i++){
			for(j = 0; j < m; j++) scanf("%d", &a[i][j]);
		}
		for(i = 0 ; i < m; i++){
			for(j = 0; j < n; j++) b[i][j] = a[j][i];
		}
		for(i = 0 ; i < n; i++){
			for(j = 0; j < n; j++) {
				c[i][j] = 0;
				for(k = 0; k < m; k++){
					c[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		printf("Test %d:\n", x);
		for(i = 0 ; i < n; i++){
			for(j = 0; j < n; j++) {
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
		x++;
	}
	return 0;
}
