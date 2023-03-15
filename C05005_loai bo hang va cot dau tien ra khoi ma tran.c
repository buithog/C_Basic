#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int x = 1;
	while(x <= t){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n + 5][n + 5], b, c, i , j, sum[1000] = {0}, s[10000] = {0};
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Test %d:\n", x);
		for(i = 0; i < n ; i++){
			for(j = 0; j < m; j++) {
				if(i != 0 && j != 0) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		x++;
	}
	return 0;
}
