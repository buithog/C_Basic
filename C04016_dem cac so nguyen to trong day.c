#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int snt(int n )
{
	if(n < 2) return 0;
	int i;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int tang(int n, int a[]){
	int i, j, tmp;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	int x = 1;
	while(x <= t){
		int n;
		scanf("%d", &n);
		int a[100005], cnt[100005], i;
		bool check[100005];
		for(i = 0; i < 100005; i++){
			cnt[i] = 0;
			check[i] = false;
		}
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
		}
		tang(n, a);
		printf("Test %d:\n", x);
		for(i = 0; i < n ; i++){
			if(cnt[a[i]] > 0 && !check[a[i]] && snt(a[i])){
				printf("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				check[a[i]] = true;
			}
		}
		x++;
		printf("\n");
	}
	return 0;
}
