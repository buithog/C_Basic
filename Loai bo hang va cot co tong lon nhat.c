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
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				sum[i] += a[i][j];
			}
		}
		int max = 0;
		for(i = 0; i < n; i++){
			if(max < sum[i]) {
				max = sum[i];
				b = i;
			}
		}
		for(j = 0; j < m; j++){
			for(i = 0; i < n; i++){
				if(i != b){
					s[j] += a[i][j];
				}
			}
		}
		int M = 0;
		for(j = 0; j < m; j++){
			if(M < s[j]) {
				M = s[j];
				c = j;
			}
		}
		for(i = 0; i < n ; i++){
			for(j = 0; j < m; j++) {
				if(i != b && j != c) printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		x++;
	}
	return 0;
}
