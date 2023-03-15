#include <stdio.h>
typedef long long ll;

int max(int x, int y){
	return (x > y) ? x : y;
}
int min(int x, int y){
	return (x < y) ? x : y;
}

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	int xM = max(max(max(x1, x2), x3), x4);
	int yM = max(max(max(y1, y2), y3), y4);
	int xm = min(min(min(x1, x2), x3), x4);
	int ym = min(min(min(y1, y2), y3), y4);
	int c = max(yM - ym, xM - xm);
	ll s = c*c;
	printf("%lld", s);
	return 0;
}
