#include <stdio.h>

int min(int x, int y){
	return (x < y) ? x : y;
}

int main()
{
	int n;
	scanf("%d", &n);
	int i, j, a[n + 5][n + 5], m1 =  1e6, m2 = 1e6;
	for(i = 0; i < n; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		m1 = min(m1, x);
		m2 = min(m2, y);
	}
	printf("%ld", (long) m1 * m2);
	return 0;
}
